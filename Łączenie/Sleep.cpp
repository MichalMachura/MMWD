#include "Sleep.hpp"
//--------------- SLEEP ------------------------



Sleep::Sleep(){
	TimeRange beg_end(0, 20);
	this->begin_end = beg_end;
	factors_after = factorsAfter();
}

Sleep::Sleep (TimeRange _begin_end){
	this->begin_end = _begin_end;
	factors_after = factorsAfter();
	}

Sleep::Sleep (int _begin, int _end){
	TimeRange beg_end(_begin, _end);
    this->begin_end = beg_end;
   	factors_after = factorsAfter();
}

double Sleep::alph(int m){
	/*
	 * wspó³czynnik (alfa) spadku aktywnoœci
	 * w zale¿noœci od snu w minutach (m):
	 */

	return -(0.0000025*m*m-0.0021*m+0.504);
};


void Sleep::checkRestrictionAndRetake(std::vector<Action*>* collection, DayActions* dayActions){
	// Zakladam, ze wszystko jest chronologicznie i kawa nie naklada się na sen.
	connectNearest(collection,dayActions);

	deleteToShortSleeps(collection,dayActions);

    completionSleepAtDayAction(collection,dayActions);
};

void Sleep::connectNearest(std::vector<Action*>* collection, DayActions* dayActions)
    {
	int counter = 0;

	for (unsigned int i = 0; i < collection->size(); i++){
		Sleep* item = dynamic_cast<Sleep*>((*collection)[i]);
		if(item){
			counter++;
			if (counter==2){
				TimeRange firstTR = (*collection)[i-1]->getTimeRange();
				TimeRange secondTR = item->getTimeRange();

				int firstBeg=firstTR.getBegin();
				int firstEnd=firstTR.getEnd();
				int scndBeg=secondTR.getBegin();
				int scndEnd=secondTR.getEnd();

				if (firstEnd >= scndBeg){   //jesli koniec wczesniejszej >= poczotek nastepnej
					//lacze dwa sny w jedno action

					int newBegin =  (firstBeg<=scndBeg) ? firstBeg : scndBeg;
					int newEnd = (firstEnd>= scndEnd) ?  firstEnd : scndEnd;

					(*collection)[i-1]->setTimeRange(newBegin,newEnd);
					delete (*collection)[i];    //usuniecie tej czynnosci
					collection->erase(collection->begin()+i);   //usuniecie z wektora

					--i;
				}
				counter --;
			}
		}
		else
			counter = 0;
    }
    }

void Sleep::deleteToShortSleeps(std::vector<Action*>* collection, DayActions* dayActions)
    {
    for(int i = 0; i < collection->size(); ++i)
        {
        Sleep* sl = dynamic_cast<Sleep*>((*collection)[i]);
        if(sl != nullptr && sl->begin_end.length() < MIN_SLEEP)
            {
            delete sl;
            collection->erase(collection->begin() + i);
            --i;
            }
        }

    }

void Sleep::completionSleepAtDayAction(std::vector<Action*>* collection, DayActions* dayActions)
    {
    bool was_added = false;
    int rest_sleep;
    int sumSleep = sumSleeps(collection);

    rest_sleep = MIN_DAY_SLEEP - sumSleep;

    while(rest_sleep > 0)
        {
        if(rest_sleep < MIN_SLEEP)
            rest_sleep = MIN_SLEEP;

        TimeRange range = dayActions->getMaxFreeTimeRange();

        if(range.length() <= MIN_SLEEP) //when is no more any free ranges in action
            break;

        if(range.length() > rest_sleep)     //if range is larger than is needed
            range = TimeRange::randomTimeRange(range,rest_sleep);

        Sleep* add = new Sleep(range);  //creating sleep object

        rest_sleep -=range.length();    //divide from rest time

        dayActions->addAction(add);     //adding to dayActions as a new action

        was_added = true;
        }

    if(was_added)
        connectNearest(collection,dayActions);
    }

int Sleep::sumSleeps(std::vector<Action*>* collection)
    {
    int sumSleep = 0;

    for(Action* x : *collection)
        {
        Sleep* xSleep = dynamic_cast<Sleep*>(x);

        if(xSleep != nullptr)
            {
            sumSleep += xSleep->begin_end.length();
            }
        }

    return sumSleep;
    }


Factors Sleep::factorsAfter(){
	double newA;
	int lenSleep = begin_end.length();
	newA = alph(lenSleep);
	Factors newFactors(Factors::MAX_Y, newA);
	factors_after = newFactors;
	return newFactors;
}


string Sleep::toString() const{
	std::stringstream text;
    text<<"SLEEP:\t"<<Action::toString()<<"\tLength: "<<minToString(begin_end.length())<<"\n";

	return text.str();
};


void Sleep::update(std::vector<Action*>* collection, Factors& start_factors){

	for (unsigned int i = 0; i < collection->size(); i++){
		Sleep* item = dynamic_cast<Sleep*>((*collection)[i]);
		if(item){
			item->factorsAfter();
		}
	}
}

Action* Sleep::randomAction(TimeRange range) const{
	Sleep* ptrSleep = new Sleep(range);
	return ptrSleep;
};

Action* Sleep::clone() const{
	Sleep* ptrSleep = new Sleep;
	*ptrSleep = *this;
	return ptrSleep;
}


Action* Sleep::divideByRange(TimeRange &range){
	if (this->begin_end.getBegin() < range.getBegin() && range.getEnd() < this->begin_end.getEnd()){
		Sleep * ptrSleep;
		ptrSleep = new Sleep(range.getEnd(), this->begin_end.getEnd());

		this->begin_end.setEnd(range.getBegin());
		return ptrSleep;
	}
	else if(this->begin_end.getBegin() < range.getBegin() && this->begin_end.getEnd() <= range.getEnd())
        {
        begin_end.setEnd(range.getBegin());
        return nullptr;
        }
	else if(range.getBegin() <= this->begin_end.getBegin() && range.getEnd() < this->begin_end.getEnd())
        {
        begin_end.setBegin(range.getEnd());
        return nullptr;
        }
	else // kiedy range nie zawiera się w czasie trwania snu oraz gdy range zawiera cały sen!!!
		return nullptr;
}
