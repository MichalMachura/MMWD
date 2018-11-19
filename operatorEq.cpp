#include "DayActions.hpp"

DayAction& DayActions::operator=(const DayAction& second)
{
    DayActions first;
    first.modified = second.modified;
    first.updated_factors = second.updated_factors;
    first.collection = second.collection;
    first.goal_function = second.goal_function;
    first.class_types = second.class_types;
    first.start_ = second.start_;
    first.end_ = second.end_;
    first.goal_function_value = second.goal_function_value;
}
