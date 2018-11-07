 #include<iostream>
#include "Chromosome.hpp"
#include "GeneticAlgorithm.hpp"
#include <time.h>
using namespace std;
/*****
class Object
    {
    public:
        int val;
        int isEqual(Object* other)
            {
            return val-other->val;
            }
    };


int sorting(vector<Object*>& collection)
    {
    bool ans = true, flag = false;
    int iter_num=0;
    for(int j = collection.size()-1; j > 0; --j)
        {
        for(int i = 0; i < j; i++) //i-te pozycje to od 0 do j-otej
            {
            int z = collection[i]->isEqual(collection[i+1]);

            if(z > 0)// jesli aktualna i-ta pozycja jest wieksza od i+1-szej
                {   //zamieniamy je
                Object* temporary = collection[i];
                collection[i] = collection[i+1];
                collection[i+1] = temporary;
                flag = true;    //ustwienie flagi gdy nast¹pi zmiana
                }
            else if(z == 0) //gdy pozycje sa rowne lub jedna zawiera sie w drugiej
                ans = false;
            iter_num++;
            }

        if(!flag)   //gdy flaga nie ustawiona konczymy sortowanie
            break;
        flag = false;   //reset flagi, gdy jest ustawiona dla nastêpnej pêtli
        }
    return iter_num;
    }
**/

int main()
    {
    int abc;
    clock_t start_time, end_time;
    Ciag ch = Ciag();

    //(chrom. , roznica, liczba powtorzen wyniku, max iter.,max. populacja, max liczba wybieranych najlepszych)
    GeneticAlgorithm genAlg = GeneticAlgorithm(&ch,0,5,40,40,6);

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

    /**
    vector<Object*> vec;
    for(int i =0 ; i < 10000 ;++i)
        {
        Object* obj=new Object();
        obj->val = rand()%10000;
        vec.push_back(obj);
        }

    for(Object* x : vec)
        cout<<x->val<<"\t";
    cout<<'\n';

    int ans1 = sorting(vec);

    cout<<"Posortowane w "<<ans1<<" krokach\n";
    for(Object* x : vec)
        cout<<x->val<<"\t";
    cout<<"\n";

    Object* help= vec[3];
    vec[3]=vec[4];
    vec[4]= help;

    cout<<"Zamiana dwoch 3 z 4: \n";
    for(Object* x : vec)
        cout<<x->val<<"\t";
    cout<<'\n';

    ans1 = sorting(vec);

    cout<<"Posortowane w "<<ans1<<" krokach\n";
    for(Object* x : vec)
        cout<<x->val<<"\t";
    cout<<"\n";

    */
    cin>>abc;

    return 0;
    }
