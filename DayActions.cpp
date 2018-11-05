#include "DayActions.hpp"
using namespace std;

virtual bool DayActions::upgradeFactors();

bool DayActions::sort()
    {
    bool ans = true;
    int i = 0, j = 0;
    for(int j = 0; j < collection.size(); j++)
        {
        //ustalanie j-otej pozycji
        for(int i = j+1; i < collection.size(); i++) //i-te pozycje to od j-otej do konca
            {
            int z = collection[i]->isEqual(collection[j]);
            if(z < 0)// jesli aktualna j-ota pozycja jest wieksza od i-tej
                {   //zamieniamy je
                Action* temporary = collection[i];
                collection[i] = collection[j];
                collection[j] = temporary;
                }
            else if(z == 0) //gdy pozycje sa rowne lub jedna zawiera sie w drugiej
                ans = false;
            }
        }
    return ans;
    }

Chromosome* DayActions::crossingOver(Chromosome* other)
    {
    DayActions1* second = dynamic_cast<DayActions1*>(other)

    if(!second)
        return nullptr;

    TimeRange range = TimeRange::randomTimeRange(start_,end_);

    return replacePart(second,range);
    }

Chromosome* DayActions::mutation()
    {
    DayActions* ans = new DayActions(*this);
    int len = rand()%(end_*0.1);
    TimeRange t1 = TimeRange::randomTimeRange(start_, end_, len);
    TimeRange t2 = TimeRange::randomTimeRange(start_, end_, len);

    }



