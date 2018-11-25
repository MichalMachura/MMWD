#include "CoffeeAndSleepGoalFunction.hpp"

Factors CoffeeAndSleepGoalFunction::getFactorsAt(int time, Factors& start_factors, std::vector<Action*>* collection_) const
    {
    if(time == 0)
        return start_factors;

    Factors previous_factors = start_factors;
    int previous_end = 0;

    for(int i = 0; i < collection_->size(); ++i)
        {
        Action* x = (*collection_)[i];

        if(x->getEnd() > time)
            {
            if(x->getBegin() <= time) // during of action x
                {
                if(dynamic_cast<Sleep*>(x) != nullptr)  //if i's Sleep
                    {
                    Factors ans(0,0);

                    return ans;
                    }
                else if(dynamic_cast<Coffee*>(x) != nullptr)    // if it's Coffee
                    {
                    Factors ans;
                    ans = x->getFactorsAfter();

                    return ans;
                    }
                }
            else    //if x->getBegin() > time and x->getEnd() > time // before action x, but after previous
                {
                int time_interval = time - previous_end;

                int y_at_time = previous_factors.getA()*time_interval + previous_factors.getY();
                int a = previous_factors.getA();

                if(y_at_time < 0 && previous_factors.getA() != 0)
                    {
                    y_at_time = 0;
                    a = 0;
                    }

                Factors ans(y_at_time, a);
                return ans;
                }
            }
        previous_factors = x->getFactorsAfter();
        previous_end = x->getEnd();
        }

    int time_interval = time - previous_end;

    int y_at_time = previous_factors.getA()*time_interval + previous_factors.getY();
    int a = previous_factors.getA();

    if(y_at_time < 0 && previous_factors.getA() != 0)
        {
        y_at_time = 0;
        a = 0;
        }

    Factors ans(y_at_time, a);

    return ans;
    }



void CoffeeAndSleepGoalFunction::countMaxPossible()const
    {
    max_possible = multiplier_integral*24*60*Factors::MAX_Y + multiplier_coffee*Coffee::getMaxTotalPerDay();
    }

double CoffeeAndSleepGoalFunction::countLocalIntegral(Factors& previous_end_factors, int previous_end_time,int current_start_time)
    {
    double time_interval = current_start_time - previous_end_time;      //od konca przedzia³u odejmujemy poczatek

    double current_start_y = previous_end_factors.getA()*time_interval + previous_end_factors.getY(); //obliczamy y na rozpoczeciu czynnosci

    if(current_start_y < 0 && previous_end_factors.getA() != 0)  //jesli aktualny y jest ujemny - aktywnosc ma byc > 0 !!!!
        {
        current_start_y  = 0;   //ustawiamy y konca przedzialu na 0
        current_start_time = (previous_end_factors.getA()*previous_end_time-previous_end_factors.getY())/previous_end_factors.getA(); //i szukamy x dla ktorego y=0
        time_interval = current_start_time - previous_end_time;
        }

    return (previous_end_factors.getY() + current_start_y)*time_interval/2;
    }
