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

Chromosome* DayActions::crossingOver(Chromosome* other)
    {
    DayActions1* second = dynamic_cast<DayActions1*>(other)

    if(!second)
        return nullptr;

    int max_length_to_cross = end_/3;           //33% of a day
    int min_length_to_cross = 60;           //1 hour
    int length_to_cross = rand()%(max_length_to_cross-min_length_to_cross) + min_length_to_cross;       //random length crossed time range

    TimeRange range = TimeRange::randomTimeRange(start_,end_, length_to_cross);

    return replacePart(second,range);
    }

Chromosome* DayActions::mutation()
    {
    DayActions* ans = new DayActions(*this);    //our new object to mutation
    int max_length_to_mutation = 3*60;           //3 hours
    int min_length_to_mutation = 60;           //1 hour
    int length_to_mutation = rand()%(max_length_to_mutation - min_length_to_mutation) + min_length_to_mutation;       //random length crossed time range

    TimeRange t1 = TimeRange::randomTimeRange(start_, end_, length_to_mutation);    //random time ranges
    TimeRange t2 = TimeRange::randomTimeRange(start_, end_, length_to_mutation);

    while(t1.isEqual(t2) == 0)      //first should not contain second
        t2 = TimeRange::randomTimeRange(start_, end_, length_to_mutation);


//.....................

    }

std::vector<Action*>* DayActions::getPart(TimeRange& range)
    {
    if(range.begin == range.end)
        return nullptr;

    std::vector<Action*>* part = new std::vector<Action*>;

    if(range.begin == start_ && range.end == end_)
        {
        //copy all
        }

    int previous_start_time = 0;
    int previous_end_time =0;

    for(int i = 0; i< collection.size(); ++i)
        {
        Action* x = collection[i];
        if(x->getEnd() < range.begin)
            {
            continue;
            }
        else if(x->getBegin() >= range.begin && x->getEnd()< range.end)  //1
            {
            //dodajemy  w pelni nalezy
            }
        else if(x->getBegin() < range.begin && x->getEnd()> range.begin)        //2
            {
            //w czesci nalezy lewy brzeg
            if(range.end < x->getEnd())    //x contain whole range with range's ends

            else    //range.end >= x->getEnd()   //range contain part with end of x and perhaps something more
                {

                }
            }
        else if(x->getBegin() < range.end && x->getEnd() >= range.end)        //30
            {
            //w czesci nalezy prawy brzeg
            if(x->getBegin() < range.begin )//x contain whole range with range's ends
                {

                }
            else    //range.begin <= x->getEnd()   //range contain part with begin of x and perhaps something more
                {

                }
            break;  //it's last possible action part
            }
        else if(range.end <= x->getBegin())
            break;  //after last possible action

        }
    }




