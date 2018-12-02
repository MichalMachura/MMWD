/*
 * Action.hpp
 */

#ifndef ACTION_HPP_
#define ACTION_HPP_


#include <string>
#include <vector>
#include "TimeRange.hpp"
#include "Factors.hpp"
#include <sstream>
#include "DayActions.hpp"

using std::string;

class Action {

protected:
	TimeRange begin_end;   			// czas trwania czynnosci
	Factors factors_after;			// Wspolczynniki po wykonaniu czynnosci

public:

	//---- GET FUNCTION ----
	const int getBegin() const;
	const int getEnd() const;
	TimeRange getTimeRange() const;
	//double getYmodifier() const;
	Factors getFactorsAfter() const;

	//---- SET FUNCTION ----
	bool setBegin(int _begin);
	bool setEnd(int _end);
	void setBeginEnd(int begin, int end);
	void setTimeRange(TimeRange range);
	void setTimeRange(int, int);

	// ---- isEqual(Action&) ----
	//compare Actions, return answer from TimeRange::isEqual():
	// <0 if this is earlier than other;
	//  >0 if this is later than other;
	//  0 if are some complications or ranges are equal
	int isEqual(const Action* otherAction) const;

	// ---- VIRTUAL FUNCTIONS ----

	//virtual bool checkRestrictionAndRetake(std::vector<Action*>* collection) = 0;

	virtual string toString() const ;

	virtual void update(std::vector<Action*>* collection, Factors& start_factors) = 0;

	virtual Action* randomAction(TimeRange range)const  = 0;

	virtual Action* clone() const = 0;

	virtual Action* divideByRange(TimeRange& range) = 0;

	friend std::ostream& operator<<(std::ostream& out, const Action& obj);

	virtual ~Action()
        {}
};

#endif /* ACTION_HPP_ */
