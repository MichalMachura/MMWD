#include "Sleep.hpp"

//--------------- SLEEP ------------------------



Sleep::Sleep(){
	TimeRange beg_end(0, 20);
	this->begin_end = beg_end;
	factors_after = factorsAfter();
};

Sleep::Sleep (TimeRange _begin_end){
	Sleep();
	if (_begin_end.length()>20)
		this->begin_end = _begin_end;
	else {
		TimeRange shortTR(_begin_end.getBegin(), _begin_end.getBegin()+ 20);
		this->begin_end = shortTR;
	}
};

Sleep::Sleep (int _begin, int _end){
	Sleep();
	TimeRange beg_end(_begin, _end);
	if (beg_end.length()>20)
		this->begin_end = beg_end;
	else {
		TimeRange shortTR(beg_end.getBegin(), beg_end.getBegin()+20);
		this->begin_end = shortTR;
	}
};




bool Sleep::checkRestrictionAndRetake(std::vector<Action*>* collection){
	// Zakladam, ze wszystko jest chronologicznie i kawa nie naklada się na sen.
	int counter = 0;
	int sumSleep = 0;
	for (unsigned int i = 0; i < collection->size(); i++){
		Sleep* item = dynamic_cast<Sleep*>((*collection)[i]);
		if(item){
			TimeRange i_TR;
			i_TR= (*collection)[i]->getTimeRange();
			int len_item = i_TR.length();
			sumSleep += len_item;
			counter++;
			if (counter==2){
				TimeRange firstTR;
				firstTR = (*collection)[i-1]->getTimeRange();
				TimeRange secondTR;
				secondTR = (*collection)[i]->getTimeRange();
				int firstBeg=firstTR.getBegin();
				int firstEnd=firstTR.getEnd();
				int scndBeg=secondTR.getBegin();
				int scndEnd=secondTR.getEnd();

				if (firstEnd >= scndBeg){
					//lacze dwa sny w jedno action

					int newBegin =  (firstBeg<=scndBeg) ? firstBeg : scndBeg;
					int newEnd = (firstEnd>= scndEnd) ?  firstEnd : scndEnd;

					Sleep connectedSleep;
					connectedSleep.setBegin(newBegin);
					connectedSleep.setEnd(newEnd);

					*((*collection)[i-1]) = connectedSleep;
					collection->erase(collection->begin()+i);
					i--;
				}
				counter --;
			}
		}
		else
			counter = 0;
	}
	if (sumSleep < MIN_DAY_SLEEP)
		return false;
	else
		return true;
};


Factors Sleep::factorsAfter(){
	double newA;
	int lenSleep = begin_end.length();
	newA = Factors::alph(lenSleep);
	Factors newFactors(MAX_Y, newA);
	factors_after = newFactors;
	return newFactors;
}


string Sleep::toString(){
	string text = "SLEEP"+string("\t")+"START: "+ minToString(begin_end.getBegin())
			+ string("\t")+"STOP: "+minToString(begin_end.getEnd()) +string("\t")
			+ "Length: " + minToString(begin_end.length()) + string("\n");
	return text;
};


bool Sleep::update(std::vector<Action*>* collection, Factors& start_factors){

	for (unsigned int i = 0; i < collection->size(); i++){
		Sleep* item = dynamic_cast<Sleep*>((*collection)[i]);
		if(item){
			item->factorsAfter();
		}
	}
	return true;
}

Action* Sleep::randomAction(TimeRange range){
	Sleep* ptrSleep = new Sleep(range);
	return ptrSleep;
};

Action* Sleep::clone(){
	Sleep* ptrSleep = new Sleep;
	*ptrSleep = *this;
	return ptrSleep;
}


Action* Sleep::dividingByRange(TimeRange &range){
	if (range.getBegin() > this->begin_end.getBegin()  &&  range.getEnd() < this->begin_end.getEnd()){
		Sleep * ptrSleep;
		ptrSleep = new Sleep(range.getEnd(), this->begin_end.getEnd());

		this->begin_end.setEnd(range.getBegin());
		return ptrSleep;

	}
	else // kiedy range nie zawiera się w czasie trwania snu:
		return nullptr;
}
