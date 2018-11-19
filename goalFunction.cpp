#include "DayActions.hpp"

double DayActions::goalFunction(vector<Action*>* collection, Factors start_factors)
    {
                                                                                                            //double previous_end_y = start_factors.y;
    Factors previous_end_factors   //zamiast dwoch zmiennych jest do tego klasa z mysla o tym stworzona        //double previous_end_alpha = start_factors.alpha;//ALPHA tez potrzebne bo na poczatku snu/kawy nie znamy wartosci y i musimy go obliczac
    double previous_end_time = 0;       //czas poczatku dnia
    double sum=0;
    const int END_TIME_OF_DAY = 24*60;


    for(Action* x : *collection)
        {
        Action* x = (*collection)[i];
        //previous_end_y = (x-1)->factors_after.y;
        double current_start_time = x->getBegin();      //czas rozpoczecia czynnosci czyli koniec przedzialu czasowego
        double time_interval = current_start_time - previous_end_time;      //od konca przedzia³u odejmujemy poczatek

        double current_start_y = previous_end_time.a*time_interval + previous_end_factors.y; //obliczamy y na rozpoczeciu czynnosci

        if(current_start_y < 0 && previous_end_factors.a != 0)  //jesli aktualny y jest ujemny - aktywnosc ma byc > 0
            {
            current_start_y  = 0;   //ustawiamy y konca przedzialu na 0
            current_start_time = (previous_end_factors.a*previous_end_time-previous_end_factors.y)/previous_end_factors.a; //i szukamy x dla ktorego y=0
            time_interval = current_start_time - previous_end_time;
            }

        sum = sum + (previous_end_y + current_start_y)*time_interval/2; //to pozosta³o twoje :)

        previous_end_factors = x->getFactors(); //ustawiamy wartosci z konca aktualnej czynnosci jako poczatek nowego przedzialu nic nie ronienia ;)
        previous_end_time = x->getEnd();
        }


    if(previous_end_time < END_TIME_OF_DAY)
        {
        double time_interval = END_TIME_OF_DAY - previous_end_time;      //od konca przedzia³u odejmujemy poczatek
        double current_start_of_day_end = previous_end_time.a*time_interval + previous_end_factors.y; //obliczamy y na koncu dnia

        if(current_start_of_day_end < 0 && previous_end_factors.a != 0)  //jesli aktualny y jest ujemny - aktywnosc ma byc > 0
            {
            current_start_of_day_end  = 0;   //ustawiamy y konca przedzialu na 0
            current_start_of_day_end = (previous_end_factors.a*previous_end_time-previous_end_factors.y)/previous_end_factors.a; //i szukamy x dla ktorego y=0
            time_interval = END_TIME_OF_DAY - previous_end_time;
            }
        sum = sum + (previous_end_y + current_start_of_day_end)*time_interval/2;
        }

    return sum;
    }
