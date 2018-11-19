
#include "Coffee.hpp"

//--------------- COFFEE ------------------------

Coffee::Coffee(){
	TimeRange tmpBegEnd(1,1);
	begin_end = tmpBegEnd;
	coffee_quantity = 200;
	Factors tmp_fac(0,1);
	factors_after = tmp_fac;

};
Coffee::Coffee(int  _begin, int _quanities){
	TimeRange tmpBegEnd(_begin,_begin);
	begin_end = tmpBegEnd;
	if (_quanities <= MAX_TOTAL_PER_DAY && _quanities>=MIN_PORTION)
		coffee_quantity = _quanities;
	else if (_quanities >= MAX_TOTAL_PER_DAY)
		coffee_quantity =MAX_TOTAL_PER_DAY;
	else
		coffee_quantity =MIN_PORTION;
	Factors tmp_fac(0,1);
	factors_after = tmp_fac;
};

Coffee::Coffee(TimeRange _anTimeRng, int _quanities){					// Czas rozpoczęcia picia kawy i zakończenia jest ten sam :)
	TimeRange tmpBegEnd(_anTimeRng.getBegin(),_anTimeRng.getBegin());
	begin_end = tmpBegEnd;
	if (_quanities <= MAX_TOTAL_PER_DAY && _quanities>=MIN_PORTION)
		coffee_quantity = _quanities;
	else if (_quanities >= MAX_TOTAL_PER_DAY)
		coffee_quantity =MAX_TOTAL_PER_DAY;
	else
		coffee_quantity =MIN_PORTION;
	Factors tmp_fac(0,1);
	factors_after = tmp_fac;

};

Coffee::Coffee(int _begin , int _quanities, Factors _factors_after){
	TimeRange tmpBegEnd(_begin,_begin);
	begin_end = tmpBegEnd;
	if (_quanities <= MAX_TOTAL_PER_DAY && _quanities>=MIN_PORTION)
		coffee_quantity = _quanities;
	else if (_quanities >= MAX_TOTAL_PER_DAY)
		coffee_quantity =MAX_TOTAL_PER_DAY;
	else
		coffee_quantity =MIN_PORTION;
	factors_after = _factors_after;

}
Coffee::Coffee(Coffee& _coffeeToCopy){
	coffee_quantity = _coffeeToCopy.coffee_quantity;
	begin_end = _coffeeToCopy.begin_end;
	factors_after = _coffeeToCopy.factors_after;
};


// ----- GETS FUNCTIONS
int Coffee::getCoffeeQuantity(){
	return coffee_quantity;
};

const int  Coffee::getMaxTotalPerDay(){
	return MAX_TOTAL_PER_DAY;
}






bool Coffee::checkRestrictionAndRetake(std::vector<Action*>*collection){
	int coffeeSum = 0;
	for (unsigned int i = 0; i < collection->size(); i++){
		Coffee* item = dynamic_cast<Coffee*>((*collection)[i]);
		if(item){
			int coffeeToAdd = (item)->getCoffeeQuantity();
			if (coffeeToAdd<=MAX_TOTAL_PER_DAY-coffeeSum)
				coffeeSum += coffeeToAdd;
			else
				collection->erase(collection->begin()+i);
			Factors _afterCoffee;
			if(i>0){
				_afterCoffee = item->factorsAfter((*collection)[i-1]);
				if(_afterCoffee.getY()>MAX_Y){
					collection->erase(collection->begin()+i);
				}
			}
		}

	}
	return true;
};

Factors Coffee::factorsAfter(Action* previousCoffee){

	double alpha_modifier = Factors::modificationAlpha(this->coffee_quantity);
	double y_modifier= Factors::increaseY(this->coffee_quantity);
	Factors previousFactors(0,0);
	previousFactors = previousCoffee->getFactorsAfter();

	int TimeBetween = 0;
	TimeBetween = (this->begin_end.getBegin()) - (previousCoffee->getTimeRange().getEnd());

	if (TimeBetween<0){
		Factors nullFactors(0,0);
		return nullFactors;
	}
	double newY = previousFactors.getY()-previousFactors.getA()*TimeBetween+y_modifier;
	double newA = previousFactors.getA() * alpha_modifier;

	Factors newFactors(0, newA);
	newFactors.setY(newY);
	factors_after = newFactors;
	return newFactors;
};


string Coffee::toString(){
	string text = "COFFEE"+string("\t") + "START: "	+ string(minToString(begin_end.getBegin()))
			+ string("\t")+string("STOP: ")
			+ minToString(begin_end.getEnd()) + string("\t") + "Portion: "
			+ std::to_string(coffee_quantity) + "ml \n";
	return text;
};




bool Coffee::update(std::vector<Action*>* collection, Factors& start_factors){

	Coffee* firstItem = dynamic_cast<Coffee*>((*collection)[0]);
	if (firstItem){
		Coffee fictionStarter(0,0,start_factors);
		firstItem->factorsAfter(&fictionStarter);
	}

	for (unsigned int i = 1; i< collection->size(); i++){
		Coffee* item = dynamic_cast<Coffee*>((*collection)[i]);
			if(item){
				item->factorsAfter((*collection)[i-1]);
			}
	}
	return true;
}


Action* Coffee::randomAction(TimeRange range){
	int rndQuantity = generateRandom(1, MAX_TOTAL_PER_DAY);  //ustawiam dawnkę randomową. Od 1 do 600 ml.
	Coffee *ptrCoffee = new Coffee(range, rndQuantity);
	return ptrCoffee;
};

Action* Coffee::clone(){
	Coffee* ptrCoffee = new Coffee;
	*ptrCoffee = *this;
	return ptrCoffee;
}

Action* Coffee::dividingByRange(TimeRange &range){
	return nullptr;
}
