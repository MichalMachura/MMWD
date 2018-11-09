#include "CoffeeAndSleepGoalFunction.hpp"


Factors CoffeeAndSleepGoalFunction::getFactorsAt(int time, Factors start_factors, std::vector<Action*>* collection_)
    {
    if(time == 0)
        return start_factors;

    Factors previous_factors = start_factors;
    int previous_end = 0;

    for(int i = 0; i < collection_->size(); ++i)
        {
        Action* x = *collection_[i]

        if(x->getEnd() > time)
            {
            if(x->getBegin() <= time) // during of action x
                {
                if(dynamic_cast<Sleep*>(x))
                    {
                    return Factors({0,0})
                    }
                else if(dynamic_cast<Coffee*>(x))
                    {
                    return x->getFactorsAfter();
                    }
                }
            else    //if x->getBegin() > time and x->getEnd() > time // before action x, but after previous
                {
                int time_interval = time - previous_end;

                int y_at_time = previous_factors.a*time_interval + previous_factors.y;
                int a = previous_factors.a;

                if(y_at_time < 0 && previous_end_factors.a != 0)
                    {
                    y_at_time = 0;
                    a = 0;
                    }

                return Factors({y_at_time, a});
                }
            }
        previous_factors = x->getFactorsAfter();
        previous_end = x->getEnd();
        }

    int time_interval = time - previous_end;

    int y_at_time = previous_factors.a*time_interval + previous_factors.y;
    int a = previous_factors.a;

    if(y_at_time < 0 && previous_end_factors.a != 0)
        {
        y_at_time = 0;
        a = 0;
        }

    return Factors({y_at_time, a});
    }
