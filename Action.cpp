#include "Action.hpp"


// --- KONSTRUKTORY
Action::Action(){
	TimeRange tmpBegEnd(0,0);
	begin_end = tmpBegEnd;
	Factors tmpFAfter(0,0);
	factors_after=tmpFAfter;
};
Action::Action(TimeRange _timeRange){
	Action();
	begin_end = _timeRange;
};


// --- GET FUNCTIONS

const int Action::getBegin(){
	return begin_end.getBegin();
};
const int Action::getEnd(){
	return begin_end.getEnd();
};

TimeRange Action::getTimeRange(){
	return this->begin_end;
};


Factors Action::getFactorsAfter(){
	return factors_after;
}


// --- SET FUNCTIONS
bool Action::setBegin(int _begin){
	begin_end.setBegin(_begin);
	if (begin_end.getBegin() == _begin)
		return true;
	else
		return false;
};
bool Action::setEnd(int _end){
	begin_end.setEnd(_end);
	if (begin_end.getEnd() == _end)
		return true;
	else
		return false;
};



// --- ISEQUAL FUNCTION:

int Action::isEqual(Action& otherAction){

	if (otherAction.getEnd() <= begin_end.getBegin())
		return -1;
	else if(otherAction.getBegin() >= begin_end.getEnd() )
		return 1;
	else
		return 0;
};
