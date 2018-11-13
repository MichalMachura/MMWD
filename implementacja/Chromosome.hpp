#ifndef CHROMOSOME_HPP
#define CHROMOSOME_HPP
#include<string>
#include<vector>
#include<sstream>
#include<stdio.h>
#include <iostream>

class Chromosome
    {
    public:
        virtual Chromosome* crossingOver(Chromosome*) = 0;
        virtual Chromosome* mutation() = 0;
        virtual double goalFunction() = 0;
        virtual Chromosome* randomChromosome() const = 0;
        virtual std::string toString() = 0;
        virtual ~Chromosome(){;}
    };

class Ciag : public Chromosome
    {
    private:
        int tab[10];
        static const int length = 10;

    public:
        Ciag(){;}
        Ciag(Ciag&);

        Ciag& operator=(Ciag& other);

        Chromosome* crossingOver(Chromosome*);
        Chromosome* mutation();
        double goalFunction();
        Chromosome* randomChromosome() const;
        std::string toString();

        virtual ~Ciag(){;}
    };

#endif // CHROMOSOME_HPP
