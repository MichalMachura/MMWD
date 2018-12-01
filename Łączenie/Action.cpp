#include "Action.hpp"

// --- GET FUNCTIONS

const int Action::getBegin() const{
	return begin_end.getBegin();
};
const int Action::getEnd() const{
	return begin_end.getEnd();
};

TimeRange Action::getTimeRange() const{
    const TimeRange ans = begin_end;
	return ans;
};


Factors Action::getFactorsAfter() const{
	return factors_after;
}


// --- SET FUNCTIONS
bool Action::setBegin(int _begin){
	return begin_end.setBegin(_begin);
};
bool Action::setEnd(int _end){
	return begin_end.setEnd(_end);
};

void Action::setTimeRange(TimeRange range)
    {
    begin_end = range;
    }

void Action::setTimeRange(int begin, int end)
	{
    begin_end = TimeRange(begin,end);
	}

void Action::setBeginEnd(int begin, int end)
    {
    begin_end(begin,end);
    }

// --- ISEQUAL FUNCTION:

int Action::isEqual(const Action* otherAction) const{
    return begin_end.isEqual(otherAction->begin_end);
	/*if (otherAction->getEnd() <= begin_end.getBegin())
		return 1;
	else if(otherAction->getBegin() >= begin_end.getEnd() )
		return -1;
	else
		return 0;*/
};

std::string Action::toString() const
    {
	std::stringstream text;
    text<<begin_end<<"\t"<<factors_after;

	return text.str();
    }
