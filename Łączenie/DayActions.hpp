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
        double countGoalFunction();

    private:
        std::vector<Action*>* getPart(TimeRange&) const;
        bool setPart(std::vector<Action*>*,Factors&, TimeRange&);
        bool deleteRange(TimeRange&);

        void deleteAllActionsAndGoalFunction();

    public:
        DayActions(GoalFunction* goalFunction_, std::vector<std::pair<std::shared_ptr<const Action>,const checkingFunction>> cl_types_checkFun, Factors start_factors_ = Factors(0,0));
        DayActions(const DayActions& other);

        virtual DayActions* randomDayActions() const;

        bool addAction(const Action*);
        bool removeAction(const Action*);
        DayActions* replacePart(const DayActions*, TimeRange&) const;

        DayActions& operator=(const DayActions& other);

        virtual std::string toString() const;

        virtual ~DayActions();
};

#endif
