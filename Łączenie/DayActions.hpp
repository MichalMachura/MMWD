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
#include "generateRandom.hpp"
#include<utility>
#include<memory>
#include <typeinfo>
#include <sstream>
#include <iostream>

typedef bool (*checkingFunction)(std::vector<Action*>*);
typedef std::pair<std::shared_ptr<const Action>,const checkingFunction> Pair_shared_ptr_Action_checkingFunction;

class DayActions : public Chromosome
    {
    protected:
        static const int start_ = 0;
        static const int end_ = 60*24;
        bool modified;
        bool updated_factors;
        Factors start_factors;
        std::vector<Action*> collection;
        std::shared_ptr<GoalFunction> goal_function;
        std::vector<Pair_shared_ptr_Action_checkingFunction> class_types_and_check_functions;
        double goal_function_value;

        virtual bool updateFactors();
        void sort();
        virtual bool checkRestrictionsAndRetake();
        static void adjustToNextRange(std::vector<Action*>* vec, TimeRange& previous, TimeRange& next);


    private:
        std::vector<Action*>* getPart(TimeRange&) const;
        void setPart(std::vector<Action*>*,Factors&, TimeRange&);
        bool deleteRange(TimeRange&);

        void deleteAllActionsAndGoalFunction();
        void addRandomAction();
        void deleteOverlapping();


    public:
        DayActions(std::shared_ptr<GoalFunction> goalFunction_, const std::vector<std::pair<std::shared_ptr<const Action>,const checkingFunction>>& cl_types_checkFun,const Factors& start_factors_);
        explicit DayActions(const DayActions& other);

        virtual DayActions* randomDayActions() const;//v
        TimeRange getMaxFreeTimeRange();

        bool addAction(Action*);
        bool removeAction(Action*);
        DayActions* replacePart(const DayActions*, TimeRange&) const;

        DayActions& operator=(const DayActions& other);

        Chromosome* crossingOver(const Chromosome*) const;
        Chromosome* mutation() const;
        double goalFunction()const;
        Chromosome* randomChromosome() const;
        std::string toString() const;


        virtual ~DayActions();
};

TimeRange findMaxFreeTimeRange(const std::vector<Action*>&, int, int);  //must be sorted and overlapping must be deleted

#endif
