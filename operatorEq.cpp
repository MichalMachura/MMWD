#include "DayActions.hpp"

DayActions& DayActions::operator=(const DayAction& second)
{
    DayActions first;   //zamiast first bardziej *this
                        //albo jak już to: DayActions& first = *this;
                        //i może zostać reszta wtedy bo mamy referencje
                        //albo nawet nie potrzebne *this można usunąć first i returnować *this, bo składowe odwołują się do tego obiektu
    first.modified = second.modified;
    first.updated_factors = second.updated_factors;
    first.collection = second.collection;       //i to jest ta istotna rzecz dla której  był przeciążony operator=
                                                //trzeba w petli tworzyć nowe obiekty typu action za pomocą metody virtual Action* Action::clone()   
    first.goal_function = second.goal_function;
    first.class_types = second.class_types;
    first.start_ = second.start_;
    first.end_ = second.end_;
    first.goal_function_value = second.goal_function_value;
    //przytało by się coś zwrócić np. return *this;
}
