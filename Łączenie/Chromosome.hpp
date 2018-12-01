#ifndef CHROMOSOME_HPP
#define CHROMOSOME_HPP
#include<string>

class Chromosome
    {
    public:
        virtual Chromosome* crossingOver(const Chromosome*) const = 0;
        virtual Chromosome* mutation() const = 0;
        virtual double goalFunction()const = 0;
        virtual Chromosome* randomChromosome() const = 0;
        virtual std::string toString() const = 0;
        virtual ~Chromosome(){}
    };

#endif // CHROMOSOME_HPP
