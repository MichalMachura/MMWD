#include "DayActions.hpp"

string DayActions::toString()
{
    string str;

    str+="Status akcji wynosi ";
    str+=\'n';
    for(Action* x : *collection)
    {
            str+=x.toString();
            str+='\n';
    }

    str+="Rodzaje akcji to ";
    str+=\'n';
    for(Action* x : *class_types)
    {
            str+=x.toString();
            str+='\n';
    }


    str+="Start dnia wynosi ";
    str+=to_string(start_);
    str+='\n';

    str+="Koniec dnia wynosi ";
    str+=to_string(endt_);
    str+='\n';

    str+="Flaga modified jest rowna ";
    str+=to_string(modified);
    str+='\n';

    str+="Flaga updated_factors jest rowna ";
    str+=to_string(updated_factors);
    str+='\n';

    str+="Factors na starcie sa rowne ";
    str+=to_string(start_factors.y);
    str+=" ";
    str+=to_string(start_factors.a);
    str+='\n';

    str+="Funkcja celu jest rowna ";
    str+=to_string(goal_function_value);
    str+='\n';

    cout << str;
    return str;
}
