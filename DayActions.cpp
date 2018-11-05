#include "DayActions.hpp"

///virtual bool DayActions::upgradeFactors();

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
                flag = true;    //ustwienie flagi gdy nastąpi zmiana 
                }
            else if(z == 0) //gdy pozycje sa rowne lub jedna zawiera sie w drugiej
                ans = false;
            }
        
        if(!flag)   //gdy flaga nie ustawiona konczymy sortowanie
            break;
        flag = false;   //reset flagi, gdy jest ustawiona dla następnej pętli
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



