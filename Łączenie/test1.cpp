 #include<iostream>
#include "Ciag.hpp"
#include "GeneticAlgorithm.hpp"
#include <time.h>
#include "generateRandom.hpp"
#include<vector>
#include "Sleep.hpp"
#include "Coffee.hpp"
#include "TimeRange.hpp"
#include "CoffeeAndSleepGoalFunction.hpp"
#include "CoffeeAndSleepGoalFunction.hpp"


using namespace std;

int main()
    {
    char abc;
/*  algorytm gen. test dla klasy Ciag
    try
        {
        clock_t start_time, end_time;
        Ciag ch;

        //(wyswietlanie ,chrom. , roznica, liczba powtorzen wyniku, max iter.,max. populacja, max liczba wybieranych najlepszych)
        GeneticAlgorithm genAlg = GeneticAlgorithm(cout,&ch,0,5,400,400,7);

        start_time = clock();
        Ciag* ans = (Ciag*) genAlg.startAlgorithm(true);
        end_time = clock();
        cout<<genAlg<<endl<<endl<<"Execution time : "<<end_time-start_time<<endl;

        /********************
        start_time = clock();
        ans = (Ciag*) genAlg.restart(&ch,0,10,1000,2000,3);
        end_time = clock();
        cout<<"RESTART : \n\n"<<genAlg<<endl<<endl<<"Execution time : "<<end_time-start_time<<endl;
        *
        }
    catch(string s)
        {
        cout<<"main\n"<<s;
        }*/

    Sleep sleep;
    Coffee coffee;
    TimeRange range;
    Factors st_factors(0,0);
    std::vector<Action*> vec, vec1;

    for(int i = 1; i < 7; ++i)
        {
        range = TimeRange::randomTimeRange((i-1)*24/12*60, i*24*60/12);
        vec.push_back(coffee.randomAction(range));
        i++;
        range = TimeRange::randomTimeRange((i-1)*24/12*60, i*24*60/12);
        vec.push_back(sleep.randomAction(range));
        }

    cout<<"vec : \n";
    for(Action* x : vec)
        {
        cout<<x->toString();
        }

    Coffee::checkRestrictionAndRetake(&vec);


    cout<<"\nvec  after check: \n";
    for(Action* x : vec)
        {
        Factors temp = x->getFactorsAfter();
        cout<<x->toString()<<temp;
        x->update(&vec,st_factors);
        }


    cout<<"\nvec  after update: \n"<<"start_factors :\n"<<st_factors;
    for(Action* x : vec)
        {
        Factors temp = x->getFactorsAfter();
        cout<<x->toString()<<temp;
        }

    CoffeeAndSleepGoalFunction CaSGF(1,1);
    cout<<"goal function val: \n"<<CaSGF.goalFunction(&vec,st_factors)<<"%";


/* dzielenie
    cout<<"vec : \n";
    for(Action* x : vec)
        {
        cout<<x->toString();
        range = TimeRange::randomTimeRange(x->getBegin(),x->getEnd());
        cout<<range<<endl;
        vec1.push_back(x->dividingByRange(range));
        }

    cout<<"after dividing : \n";
    for(int i = 0; i< vec.size(); ++i)
        {
        cout<<vec[i]->toString();

        if(vec1[i] == nullptr)
            {
            cout<<"nullptr\n\n";
            continue;
            }

        cout<<vec1[i]->toString()<<endl;
        }*/
    for(auto x : vec)
        delete x;

    for(auto x : vec1)
        delete x;

    vec.clear();
    vec1.clear();

    cin>>abc;

    return 0;
    }
