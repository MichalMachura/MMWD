#include "DayActions.hpp"

bool DayActions::addAction(Action* a)
{
    //l = collection.size(); //czym jest l
    //pewnie czhodizlo o
    try
        {
        bool supported type = false;
        for(Pair_shared_ptr_Action_checkingFunction x : class_types_and_check_functions)
            if(typeid(x.first) == typeid(a))
                supported_type = true;

        if(!supported_type)
            return false;

        //int l = collection.size();
        //bool flag_przedzialy_nie_nachodza;

        for(auto x : collection)
            if(a->isEqual(x) == 0)
                return false;

           // x->getEnd() > x->getBegin() && //czy start jest przed koncem
            //to zapewnia mechanizm klasy Action
        collection.push_back(a);

        modified = 1;
        updated_factors = 0;

        return true;    //true z ma³ej litery
        }
    catch(std::bad_alloc e)
        {
        return false;
        }
    catch(...)
        {
        return false;
        }
}        //jest ok

