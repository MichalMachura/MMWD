#include "DayActions.hpp"

void DayActions::deleteAllActions()
{
    for (auto it = collection.begin(); it != collection.end();)
        {
            it = collection.erase(it);
        }
}
