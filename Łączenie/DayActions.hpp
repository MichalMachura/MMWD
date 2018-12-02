#ifndef DAYACTIONS_HPP
#define DAYACTIONS_HPP

class Action;
class DayActions;
class GoalFunction;

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

typedef void (*checkingFunction)(std::vector<Action*>*,DayActions*);
typedef std::shared_ptr<const Action> shared_ptr_Action;


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
        std::vector<shared_ptr_Action> class_types;
        std::vector<checkingFunction> check_functions;
        double goal_function_value;

        virtual void updateFactors();
        void sort();
        static void adjustToNextRange(std::vector<Action*>* vec, TimeRange& previous, TimeRange& next);


    private:
        std::vector<Action*>* getPart(TimeRange&) const;
        void setPart(std::vector<Action*>*,Factors&, TimeRange&);
        bool deleteRange(TimeRange&);

        void checkRestrictionsAndRetake();
        void deleteAllActionsAndGoalFunction();
        void addRandomAction();
        void deleteOverlapping();


    public:
        DayActions(std::shared_ptr<GoalFunction> goalFunction_, const std::vector<shared_ptr_Action>& cl_types, std::vector<checkingFunction> checkFun, const Factors& start_factors_);
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
