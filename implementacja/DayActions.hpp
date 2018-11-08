#ifndef DAYACTIONS_HPP
#define DAYACTIONS_HPP

#include "Chromosome.hpp"
#include "Action.hpp"
#include "TimeRange.hpp"
#include "GoalFunction.hpp"
#include "Factors.hpp"
#include<stdio.h>
#include<vector>
#include<string>


class DayActions : public Chromosome
    {
    protected:
        static const int start_ = 0;
        static const int end_ = 60*24;
        bool modified;
        bool correct;
        Factors start_factors;
        std::vector<Action*> collection;
        GoalFunction* goal_function;
        std::vector<Action*> class_types;

        virtual bool upgradeFactors();
        void sort();

    private:
        std::vector<Action*>* getPart(TimeRange&);
        bool setPart(std::vector<Action*>*,Factors, TimeRange&);
        Factors getStartFactorsAt(int begin_);

    public:
        DayActions(GoalFunction* goalFunction_, std::vector<Action*> cl_types);



        virtual bool checkRestrictionsAndRetake();
        virtual bool randomDayActions();

        bool addAction(Action*);
        DayActions* replacePart(DayActions*, TimeRange);
        double countGoalFunction();

        virtual std::string toString();
};

#endif
