#include"Chromosome.hpp"

Chromosome* Ciag::randomChromosome()
    {
    Ciag* ciag = new Ciag();
    std::vector<int> vec({1,2,3,4,5,6,7,8,9,10});

    for(int& x : ciag->tab)
        {
        int nr = rand()%vec.size();

        x = vec[nr];
        vec.erase(vec.begin()+nr);
        }
    return ciag;
    }

double Ciag::goalFunction()
    {
    double ans =0.0;
    for(int i = 0; i < length; ++i)
        ans += (i+1)*tab[9-i];

    return ans;
    }

Chromosome* Ciag::mutation()
    {
    Ciag* ch = new Ciag(*this);

    int r1 = rand()%length;
    int r2 = rand()%length;
    while(r1 ==r2 )
        r2 = rand()%length;

    int aux = ch->tab[r1];
    ch->tab[r1] = ch->tab[r2];
    ch->tab[r2] = aux;

    return ch;
    }

Chromosome* Ciag::crossingOver(Chromosome* other)
    {
    if(!other)
        return nullptr;


    Ciag* other_ = (Ciag*)other;
    Ciag* ch;

    if(rand()%2)        //random choosing the parent who will give more DNA
        ch = new Ciag(*this);
    else
        ch = new Ciag(*other_);


    int r[3];               //searching for 3 vary random position in tab
    r[0] = rand()%length;
    r[1] = rand()%length;
    r[2] = rand()%length;
    while(r[1] == r[0] )
        r[1] = rand()%ch->length;
    while(r[2] == r[0] || r[2] == r[1])
        r[2] = rand()%ch->length;

    int posOther_[3];           //position of the same number in object other_
    for(int i = 0; i < 3; ++i)
        for(int j = 0; j < length; ++j)
            if(ch->tab[r[i]] == other_->tab[j])
                {
                posOther_[i] = j;
                continue;
                }

    //replace the value
    for(int i =0; i < 3; ++i)
        {
        int aux = ch->tab[r[i]];
        ch->tab[r[i]] = other_->tab[posOther_[i]];
        other_->tab[posOther_[i]] = aux;
        }

    return ch;
    }

std::string Ciag::toString()
    {
    std::stringstream str;

    for(int x : tab)
        str<<x<<'\t';
    str<<std::endl<<"Goal Function Value => "<<this->goalFunction()<<std::endl;

    return str.str();
    }
