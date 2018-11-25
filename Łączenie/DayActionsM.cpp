#include "DayActions.hpp"

double DayActions::countGoalFunction()
    {
    return goal_function->goalFunction(vector<Action*>);
    }

void DayActions::sort() //setting and removing flags
    {
    bool flag = false;
    int i = 0, j = 0;
    for(int j = collection.size()-1; j > 0; --j)
        {
        for(int i = 0; i < j; i++) //i-te pozycje to od 0 do j-otej
            {
            int z = collection[i]->isEqual(collection[i+1]);

            if(z > 0)// jesli aktualna i-ta pozycja jest wieksza od i+1-szej
                {   //zamieniamy je
                Action* temporary = collectioSn[i];
                collection[i] = collection[i+1];
                collection[i+1] = temporary;
                flag = true;    //ustwienie flagi gdy nast¹pi zmiana
                }
            }

        if(!flag)   //gdy flaga nie ustawiona konczymy sortowanie
            break;

        modified = true;        //setting and removing flags
        updated_factors = false;

        flag = false;   //reset flagi, gdy jest ustawiona dla nastêpnej pêtli
        }
    }

DayActions* DayActions::replacePart(const DayActions* other, TimeRange& range) const
    {
    if(this->class_types_and_check_function != other-class_types_and_check_function>     //class types must be the same
        throw std::string("\nObjects are contain different Action class types and checkFunctions objects. Replace is impossible!\n");

    if(range.getBegin() == range.getEnd())  //it's pointed range
        return new DayActions(*this);

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

    if(!ans->setPart(part, part_start_factors, range))      //problems with deleting
        {
        *ans = *this;
        return ans;
        }

    ans->sort();

    if(!(ans->checkRestrictionsAndRetake()) || !(ans->upgradeFactors()))        //if is not correct or cannot be updated
        {
        *ans = *this;
        return ans;
        }

    return ans;
    }

Chromosome* DayActions::crossingOver(const Chromosome* other) const
    {
    DayActions1* second = dynamic_cast<const DayActions1*>(other)

    if(!second)
        {
        DayActions* ans(*this);
        return ans;
        }

    int max_length_to_cross = end_/3;           //33% of a day
    int min_length_to_cross = 60;           //1 hour
    int length_to_cross = generateRandom(min_length_to_cross, max_length_to_cross);       //random length crossed time range

    TimeRange range = TimeRange::randomTimeRange(start_,end_, length_to_cross);

    return replacePart(second,range);      //replace at the range
    }

Chromosome* DayActions::mutation() const
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

    ans->sort();

    if(!(ans->checkRestrictionsAndRetake()) || !(ans->upgradeFactors()))   //if it cannot be corrected or be updated
        *ans = *this;


    return ans;
    }

std::vector<Action*>* DayActions::getPart(TimeRange& range) const
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

bool DayActions::deleteRange(TimeRange& range)  //setting flag modified and removing updated_factors
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

    modified = true;        // setting and removing flags
    updated_factors = false;
    return ans;
    }

bool DayActions::setPart(std::vector<Action*>* part, Factors& start_part_factors, TimeRange& range)   //it's delete the memory allocated for part - vector but not it's elements. they are copping to collection. collection is not sorted.
    {   //setting flag modified and removing updated_factors
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

    modified = true;        //setting and removing flags
    updated_factors = false;

    return ans;
    }

Chromosome* DayActions::randomChromosome() const
    {
    return randomDayActions();
    }

bool DayActions::updateFactors()   //setting flag updated_factors
    {
    if(modified)        //if some modifications
        checkRestrictionsAndRetake();

    bool ans = true;        // answer of upgrading modifiers

    for(Action* x : collection)
        if(!(x->update(&collection, start_factors))) // if any returned false
            ans = false;    // answer is false

    goal_function_value = countGoalFunction();

    updated_factors = true; //setting flag

    return ans;
    }

bool DayActions::checkRestrictionsAndRetake()   //removing modified and updated_factors
    {
    bool ans = true;

    sort();

    for(unsigned int i = 0; i < collection.size()-1; ++i)   //checking the overlap of times
        {
        if(collection[i]->isEqual(collection[i+1]) == 0)      //overlapping
            {
            delete collection[i+1];
            collection.erase(collection.begin()+i+1);   //deleting element
            --i;    //decrement i to compare current element with element next to deleted

            modified = true;        //setting and removing flags
            updated_factors = false;
            }
        }

    for(Pair_shared_ptr_Action_checkingFunction x : class_types_and_check_function)
        if(!(x.second(&collection)))
            ans = false;

    modified = false;   //setting flag
    updated_factors = false;
    return ans;
    }

bool DayActions::removeAction(const Action const* action)   //setting flag modified and removing updated_factors
    {
    auto iterator_ = find(collection.begin(),collection.end(),action);

    if(iterator_ != collection.end())
        {
        modified = true;    // setting flag
        updated_factors = false;
        collection.erase(iterator_);
        return true;
        }

    return false;
    }

double DayActions::goalFunction() const   //return value of goal function
    {
    if(modified)        //if was some modification
        updateFactors();///throw std::string("\nDayAction was not updated !\n");

    return goal_function_value;
    }

void DayActions::deleteAllActionsAndGoalFunction()
    {
    for(Action* x : collection) //deleting all Actions
        delete x;
    collection.clear();

    for( std::pair x : class_types_and_check_functions)     //
        delete x.first;
    class_types_and_check_functions.clear();

    delete goal_function;
    goal_function = nullptr;

    modified  = true;       //setting and removing flags
    updated_factors = false;
    }

DayActions::~DayActions()
    {
    deleteAllActionsAndGoalFunction();
    }

DayActions::DayActions(std::shared_ptr<GoalFunction> goalFunction_, std::vector<std::pair<std::shared_ptr<const Action>,const checkingFunction>>& cl_types_checkFun, Factors& start_factors_) : start_factors(start_factors_)
    {
    if(cl_types_checkFun.empty())
        throw std::string("\ncl_types_checkFun is empty\n");

    if(!goalFunction_)
        throw std::string("\ngoalFunction is nullptr\n");

    for(Pair_shared_ptr_Action_checkingFunction x : cl_types_checkFun)   //checking input vector for nullptr elements
        if(!(x->first) || x->second == nullptr) //if object or fun is nullptr
            throw std::string("\ncl_types_checkFun contain nullptr Action* or checkingFunction\n");

    class_types_and_check_functions = cl_types_checkFun;
    goal_function = goalFunction;

    modified = false;
    updated_factors = true;
    goal_function_value = 0.0;
    }

DayActions& DayActions::operator=(const DayActions& other)
    {
    deleteAllActions(); //clearing the vector for new actions

    class_types_and_check_functions = other.class_types_and_check_functions;

    modified = other.modified;
    updated_factors = other.updated_factors;
    start_factors  = other.start_factors;

    goal_function = other.goal_function;
    goal_function_value = other.goal_function_value;

    for(Action* x : other.collection)   //cloning actions in the same order
        collection.push_back(x.clone());
    }

DayActions::DayActions(const DayActions& other)
    {
    *this = other;
    }

DayActions* DayActions::randomDayActions()
    {//ranodm start_factors
    Factors random_start(generateRandom(0,100),generateRandom(-100,0));
    //returned object
    DayActions* answer = new DayActions(this->goal_function,this->class_types,random_start);

    //free ranges<=here can be located the action
    std::vector<TimeRange> free_time_ranges;
    //started range of full one day
    free_time_ranges.push_back(TimeRange(start_,end_));

    //number of action added to day
    int number_of_actions = generateRandom(5,15);

    for(int i = number_of_actions; i>0 ;--i)
        {
        Action* action;

        //generate random range from vector of ranges
        int nr_range_in_vector = generateRandom(free_time_ranges.size()-1);
        TimeRange max_range = free_time_ranges[nr_range_in_vector]; //range from whose will be range of new action

        //generate max length of new range as random from 0 to half of range_length
        int max_new_range_length = generateRandom(max_range.length() * 0.5);

        TimeRange range = TimeRange::randomTimeRange(free_time_ranges[nr_range_in_vector].getBegin(),)


        int random_Action_type = generateRandom(class_types.size()-1);

        }


    }






