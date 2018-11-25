#ifndef GOALFUNCTION_HPP
#define GOALFUNCTION_HPP
#include<vector>
#include "Action.hpp"
#include "Factors.hpp"

class GoalFunction
    {
    public:
        virtual double goalFunction(std::vector<Action*>* collection, Factors& start_factors) const  = 0;
        virtual Factors getFactorsAt(int time, Factors& start_factors_, std::vector<Action*>* collection) const = 0;
    };

#endif // GOALFUNCTION_HPP
