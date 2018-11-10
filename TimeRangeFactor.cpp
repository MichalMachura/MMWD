/*
 * TimeRangeFactor.cpp
 */


#include "TimeRangeFactor.hpp"

// DODAC FUN TimeRange::isEqual od Michala!!!!!

/*------ METHODES FROM CLASS TIMERANGE -------*/


TimeRange::TimeRange(){
		begin = 0;
		end = 1;
};
TimeRange::TimeRange(TimeRange& _timeRange){
	begin = _timeRange.begin;
	end = _timeRange.end;
};
TimeRange::TimeRange(int _begin, int _end){
	if (_begin>=_end){
		begin =_end ;
		end = _begin;
	}
	else{
		begin = _begin;
		end = _end;
	};
};

int TimeRange::getBegin(){
	return begin;
};
int TimeRange::getEnd(){
	return end;
};

void TimeRange::setBegin(int _beg){
	begin = _beg;
};
void TimeRange::setEnd(int _end){
	end = _end;
};


int TimeRange::length(){
	return end-begin;
};

TimeRange TimeRange::randomTimeRange(){
	int rndBegin = generateRandom(0,  MIN_IN_DAY);
	int rndEnd = generateRandom(rndBegin,  MIN_IN_DAY);
	TimeRange rndTimeRange (rndBegin, rndEnd);
	return rndTimeRange;
};

TimeRange TimeRange::randomTimeRange(int _begin,int _end){
	int rndLength = generateRandom(0,  _end-_begin);
	TimeRange rndTimeRange;
	rndTimeRange = TimeRange::randomTimeRange(_begin, _end, rndLength);
	return rndTimeRange;
}

TimeRange TimeRange::randomTimeRange(int _begin,int _end,int _length){
	int rndBegin = generateRandom(_begin,  _end-_length);
	int rndEnd = rndBegin+_length;
	TimeRange rndTimeRange (rndBegin, rndEnd);
	return rndTimeRange;
};

/*------ METHODES FROM CLASS FACTORS -------*/

Factors::Factors(){
	y =  0;
	a = 0;
};

Factors::Factors(Factors& _factors){
	y = _factors.y;
	a = _factors.a;
};

Factors::Factors(double _y, double _alpha){
	if (_y<=MAX_Y && y>=0)
		y = _y;
	else
		y = 0;
	a = _alpha;
};


double Factors::getY(){
	return y;
};
double Factors::getA(){
	return a;
};


double Factors::alph(int m){
	/*
	 * współczynnik (alfa) spadku aktywności
	 * w zależności od snu w minutach (m):
	 */

	return 0.0000025*m*m-0.0021*m+0.504;
};

double Factors::increaseY(int coffeePortion){
	/*
	 * przyrost (y+) poziomu aktywności w zależności od ilości
	 * wypitej kawy w mililitrach (coffeePortion)
	 */
	if (coffeePortion>=0)
		return 3*sqrt(coffeePortion/30);
	else
		return 0;
};


double Factors::modificationAlpha(int coffeePortion){
	return 1-sqrt(coffeePortion)/300;
};



/* -------------------------------------------------------------------
 * Pozostale funkcje przydatne do konwersji min na godziny i w napis
 * -------------------------------------------------------------------
 */

std::array<int,2> minToHours (int mins){
	std::array<int,2> hoursAndMins;
	int hours = mins / 60;
	int min = mins % 60;
	if (hours*60+min == mins){
		hoursAndMins[1] = hours;
		hoursAndMins[0] = min;
	}
	return hoursAndMins;
};

std::string minToString (int mins){
	std::array<int,2> minAndHours= minToHours(mins);
	int h = minAndHours[1];
	int m = minAndHours[0];
	std::string text = std::to_string(h)+ std::string("h ")+std::to_string(m)+std::string("min");
	return text;
};

