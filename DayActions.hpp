#ifndef DAYACTIONS_HPP
#define DAYACTIONS_HPP
using namespace std;

class DayActions
{
protected:
    bool modified;
    bool updated_factors;
    Factors updated_factors;
    vector<Action*> collection;
    GoalFunction* goal_function;
    vector<const Action const*> class_types;
    static const int start_;
    static const int end_;
    double goal_function_value;

    void sort();
    virtual bool updateFactors();
    virtual bool checkRestrictionsAndRetake();
private:
    double countGoalFunction();
    const vector<Action*>* getPart(TimeRange&);
    bool setPart(vector<Action*>* part, Factors part_start, TimeRange& range);
    void deleteAllActions();
    virtual DayAction();

public:
    const virtual DayAction* randomDayActions();
    bool addAction(Action*);
    const DayAction* replacePart(const DayActions*, TimeRange range);
    DayAction(GoalFunction* goalFunctio, vector<const Action const*> cl_types, Factors& start_factors_);
    DayActions& operator=(const DayAction& second);
    DayActions (const DayAction& other);
    bool removeAction(Action* action);

};

#endif
