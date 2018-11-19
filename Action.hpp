/*
 * Action.hpp
 */

#ifndef ACTION_HPP_
#define ACTION_HPP_


#include <string>
#include <vector>
#include "TimeRangeFactor.hpp"
using std::string;



class Action {

protected:
	TimeRange begin_end;   			// czas trwania czynnosci
	Factors factors_after;			// Wspolczynniki po wykonaniu czynnosci

public:

	Action();
	Action(TimeRange _timeRange);

	//---- GET FUNCTION ----
	const int getBegin();
	const int getEnd();
	TimeRange getTimeRange();
	const double getYmodifier();
	Factors getFactorsAfter();

	//---- SET FUNCTION ----
	bool setBegin(int _begin);
	bool setEnd(int _end);

	// ---- isEqual(Action&) ----
	//compare Actions, return:
	// -1 if this is earlier than other;
	//  1 if this is later than other;
	//  0 if are some complications
	int isEqual(Action& otherAction);

	// ---- VIRTUAL FUNCTIONS ----

	virtual bool checkRestrictionAndRetake(std::vector<Action*>* collection){
		return false;
	};
	virtual string toString(){
		return "ERROR: Virtual method Action::toString()";
	};
	virtual bool update(std::vector<Action*>* collection, Factors& start_factors){
		return false;
	}
	virtual Action* randomAction(TimeRange range){
		return nullptr;
	}
	virtual Action* clone(){
		return nullptr;
	}
	virtual Action* dividingByRange(TimeRange& range){
		return nullptr;
	}
	virtual ~Action(){;};
};

#endif /* ACTION_HPP_ */
