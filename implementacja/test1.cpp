 #include<iostream>
#include "Chromosome.hpp"
#include "GeneticAlgorithm.hpp"
#include <time.h>
using namespace std;

int main()
    {
    int abc;

    try
        {
        clock_t start_time, end_time;
        Ciag ch;

        //(wyswietlanie ,chrom. , roznica, liczba powtorzen wyniku, max iter.,max. populacja, max liczba wybieranych najlepszych)
        GeneticAlgorithm genAlg = GeneticAlgorithm(cout,&ch,0,5,20,15,6);

        start_time = clock();
        Ciag* ans = (Ciag*) genAlg.startAlgorithm(true);
        end_time = clock();
        cout<<genAlg<<endl<<endl<<"Execution time : "<<end_time-start_time<<endl;

        /********************
        start_time = clock();
        ans = (Ciag*) genAlg.restart(&ch,0,10,1000,2000,3);
        end_time = clock();
        cout<<"RESTART : \n\n"<<genAlg<<endl<<endl<<"Execution time : "<<end_time-start_time<<endl;
        */
        }
    catch(string s)
        {
        cout<<"main\n"<<s;
        }

    cin>>abc;

    return 0;
    }
