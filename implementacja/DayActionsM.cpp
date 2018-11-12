#include "DayActions.hpp"
using namespace std;

virtual bool DayActions::upgradeFactors();

bool DayActions::sort()
    {
    bool ans = true, flag = false;
    int i = 0, j = 0;
    for(int j = collection.size()-1; j > 0; --j)
        {
        for(int i = 0; i < j; i++) //i-te pozycje to od 0 do j-otej
            {
            int z = collection[i]->isEqual(collection[i+1]);

            if(z > 0)// jesli aktualna i-ta pozycja jest wieksza od i+1-szej
                {   //zamieniamy je
                Action* temporary = collection[i];
                collection[i] = collection[i+1];
                collection[i+1] = temporary;
                flag = true;    //ustwienie flagi gdy nast¹pi zmiana
                }
            else if(z == 0) //gdy pozycje sa rowne lub jedna zawiera sie w drugiej
                ans = false;
            }

        if(!flag)   //gdy flaga nie ustawiona konczymy sortowanie
            break;
        flag = false;   //reset flagi, gdy jest ustawiona dla nastêpnej pêtli
        }
    return ans;
    }

Chromosome* DayActions::replacePart(DayActions* other, TimeRange range)
    {
    bool with_one = rand()%2;
    DayActions* ans;
    DayActions* second;

    if(with_one)    //if answer is based on first
        {
        ans = new DayActions(*this);
        second = other;
        }
    else            //if answer is based on second
        {
        ans = new DayActions(*other);
        second = this;
        }

    std::vector<Action*>* part = second->getPart(range);        //getting part from second
    Factors part_start_factors = second->goal_function->getFactorsAt(range.getBegin(),&(second->start_factors,second->collection)); //pasting it to first at the range

    if(!ans->setPart(part, part_start_factors, range))
        *ans = *this;

    return ans;
    }

Chromosome* DayActions::crossingOver(Chromosome* other)
    {
    DayActions1* second = dynamic_cast<DayActions1*>(other)

    if(!second)
        return nullptr;

    int max_length_to_cross = end_/3;           //33% of a day
    int min_length_to_cross = 60;           //1 hour
    int length_to_cross = generateRandom(min_length_to_cross, max_length_to_cross);       //random length crossed time range

    TimeRange range = TimeRange::randomTimeRange(start_,end_, length_to_cross);

    return replacePart(second,range);
    }

Chromosome* DayActions::mutation()
    {
    DayActions* ans = new DayActions(*this);    //our new object to mutation
    int max_length_to_mutation = 3*60;           //3 hours
    int min_length_to_mutation = 60;           //1 hour
    int length_to_mutation = generateRandom(min_length_to_mutation,max_length_to_mutation);       //random length crossed time range

    TimeRange t1 = TimeRange::randomTimeRange(start_, end_, length_to_mutation);    //random time ranges
    TimeRange t2 = TimeRange::randomTimeRange(start_, end_, length_to_mutation);

    while(t1.isEqual(t2) == 0)      //first should not contain second
        t2 = TimeRange::randomTimeRange(start_, end_, length_to_mutation);


    Factors factors_1 = goal_function->getFactorsAt(t1.getBegin(),start_factors,*collection);    // taking factors at point at time of begin range
    Factors factors_2 = goal_function->getFactorsAt(t2.getBegin(),start_factors,*collection);

    std::vector<Action*>* help_vector1 = getPart(t1);   //taking part from range
    std::vector<Action*>* help_vector2 = getPart(t2);

    if(!ans->setPart(help_vector1,factors_1,t2)) // error with deleting
        {
        for(Action* x : *help_vector1)
            delete x;
        for(Action* x : *help_vector2)
            delete x;

        *ans = *this;
        return ans;
        }

    if(!ans->setPart(help_vector2,factors_2,t1))    //error with deleting
        {
        for(Action* x : *help_vector1)
            delete x;
        for(Action* x : *help_vector2)
            delete x;

        *ans = *this;
        return ans;
        }

    sort();

    if(!checkRestrictionsAndRetake())   //if it cannot be corrected
        *ans = *this;

    return ans;
    }

std::vector<Action*>* DayActions::getPart(TimeRange& range)
    {
    if(range.getBegin() == range.getEnd())
        return new std::vector<Action*>;

    std::vector<Action*>* part = new std::vector<Action*>;

    for(Action* x : *collection)
        {
        if(x->getEnd() < range.getBegin())
            {
            continue;
            }
        else if(x->getBegin() >= range.getBegin() && x->getEnd()< range.getEnd())  //1
            {
            part->push_back(x->clone());
            }
        else if(x->getBegin() < range.getBegin() && x->getEnd()> range.getBegin())        //2
            {
            //in part it belongs to range -> left end
            if(range.getEnd() < x->getEnd())    //x contain whole range with range's ends
                {
                Action* aux = x->clone();
                aux->setBegin(range.getBegin());
                aux->setEnd(range.getEnd());
                part->push_back(aux);
                break;
                }
            else    //x->getEnd()<= range.end   //range contain part with end of x and perhaps something more
                {
                Action* aux = x->clone();
                aux->setBegin(range.getBegin());
                part->push_back(aux);
                }
            }
        else if(x->getBegin() < range.getEnd() && x->getEnd() >= range.getEnd())        //30
            {
            //in part it belongs to range -> right end
            if(x->getBegin() < range.getBegin() )//x contain whole range with range's ends
                {
                Action* aux = x->clone();
                aux->setBegin(range.getBegin());
                aux->setEnd(range.getEnd());
                part->push_back(aux);
                }
            else    //range.begin <= x->getBegin()   //range contain part with begin of x and perhaps something more
                {
                Action* aux = x->clone()
                aux->setEnd(range.getEnd());
                part->push_back(aux);
                }
            break;  //it's last possible action part
            }
        else if(range.end <= x->getBegin())
            break;  //after last possible action
        }

    return part;
    }

bool DayActions::deleteRange(TimeRange& range)
    {
    bool ans = true;
    int first = 0, num_to_erase = 0;

    for(int i = 0; i < collection.size() ; ++i)
        {
        Action* x = *part[i];

        if(x->getEnd() < range.getBegin())
            {
            continue;
            }
        else if(x->getBegin() >= range.getBegin() && x->getEnd()< range.getEnd())  //full x action is containing at range
            {
            delete x;

            if(num_to_erase++ == 0)
                {
                first = i;    //adding index to later delete from collection a pointer value
                }
            }
        else if(x->getBegin() < range.getBegin() && x->getEnd()> range.getBegin())        //2
            {
            //in part it belongs to range -> left end
            if(range.getEnd() < x->getEnd())    //x contain whole range with range's ends => dividing this action for 2 actions
                {
                Action* second = x->divideByRange(range);

                if(second != nullptr)
                    collection.push_back(second);   //adding second part of x

                break;  //end of range
                }
            else    //x->getEnd()<= range.end   //range contain part with end of x and perhaps something more
                {
                Action* second = x->divideByRange(TimeRange({range.getBegin(),x->getEnd()}));

                if(second != nullptr)       //second should be nullptr, but if it's not
                    ans = false;
                }
            }
        else if(x->getBegin() < range.getEnd() && x->getEnd() >= range.getEnd())        //3
            {
            //in part it belongs to range -> right end
            if(x->getBegin() < range.getBegin() )//x contain whole range with range's ends => dividing this action for 2 actions
                {
                Action* second = x->divideByRange(range);

                if(second != nullptr)
                    collection.push_back(second);   //adding second part of x

                break;  //end of range
                }
            else    //range.begin <= x->getBegin()   //range contain part with begin of x and perhaps something more
                {
                Action* second = x->divideByRange(TimeRange({x->getBegin(),range.getEnd()}));

                if(second != nullptr)       //second should be nullptr, but if it's not
                    ans = false;
                }
            break;  //it's last possible action part
            }
        else if(range.getEnd() <= x->getBegin())
            break;  //after last possible action
        }

    if(num_to_erase)    //is >0
        {
        collection.erase(collection.begin()+first, collection.begin()+first+num_to_erase);
        }

    return ans;
    }

bool DayActions::setPart(std::vector<Action*>* part, Factors start_part_factors, TimeRange& range)   //it's delete the memory allocated for part - vector but not it's elements. they are copping to collection. collection is not sorted.
    {
    if(range.begin == range.end)
        return false;

    bool ans = deleteRange(range);

    if(range.begin == 0)
        start_factors = start_part_factors;

    for(Action* x : *part)
        {
        collection.push_back(x);
        }

    part->clear();

    delete part;

    return ans;
    }
