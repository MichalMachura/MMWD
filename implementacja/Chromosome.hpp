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
        virtual Chromosome* crossingOver(const Chromosome*) const = 0;
        virtual Chromosome* mutation() const = 0;
        virtual double goalFunction()const = 0;
        virtual Chromosome* randomChromosome() const = 0;
        virtual std::string toString() const = 0;
        virtual ~Chromosome(){;}
    };

class Ciag : public Chromosome
    {
    private:
        int tab[10];
        static const int length = 10;

    public:
        Ciag(){;}
        Ciag(const Ciag&);

        Ciag& operator=(const Ciag& other);

        Chromosome* crossingOver(const Chromosome*) const;
        Chromosome* mutation() const;
        double goalFunction() const;
        Chromosome* randomChromosome() const;
        std::string toString() const;

        virtual ~Ciag(){;}
    };

#endif // CHROMOSOME_HPP
