#include "Coffee.hpp"

//--------------- COFFEE ------------------------
double Coffee::A_MULTIPLIER = 1;
double Coffee::Y_MULTIPLIER = 3;


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
	setCoffeeQuantity(_quanities);
	Factors tmp_fac(0,1);
	factors_after = tmp_fac;
};

Coffee::Coffee(TimeRange _anTimeRng, int _quanities){					// Czas rozpoczęcia picia kawy i zakończenia jest ten sam :)
	TimeRange tmpBegEnd(_anTimeRng.getBegin(),_anTimeRng.getBegin());
	begin_end = tmpBegEnd;
	setCoffeeQuantity(_quanities);
	Factors tmp_fac(0,1);
	factors_after = tmp_fac;

};

Coffee::Coffee(int _begin , int _quanities, Factors _factors_after){
	TimeRange tmpBegEnd(_begin,_begin);
	begin_end = tmpBegEnd;
	setCoffeeQuantity(_quanities);
	factors_after = _factors_after;

}

Coffee::Coffee(Coffee& _coffeeToCopy){
	coffee_quantity = _coffeeToCopy.coffee_quantity;
	begin_end = _coffeeToCopy.begin_end;
	factors_after = _coffeeToCopy.factors_after;
};


// ----- GETS FUNCTIONS
int Coffee::getCoffeeQuantity() const{
	return coffee_quantity;
};

int  Coffee::getMaxTotalPerDay(){
	return MAX_TOTAL_PER_DAY;
}

void Coffee::setCoffeeQuantity(int _quantities)
    {
    if (_quantities <= MAX_TOTAL_PER_DAY && _quantities>= MIN_PORTION)
		coffee_quantity = _quantities;
	else if (_quantities >= MAX_TOTAL_PER_DAY)
		coffee_quantity = MAX_TOTAL_PER_DAY;
	else
		coffee_quantity = MIN_PORTION;
    }

bool Coffee::checkRestrictionAndRetake(std::vector<Action*>*collection){
	int coffeeSum = 0;
	for (unsigned int i = 0; i < collection->size(); i++){
		Coffee* item = dynamic_cast<Coffee*>((*collection)[i]);
		if(item){
			int coffeeToAdd = (item)->getCoffeeQuantity();
			int rest_for_coffee_portion = MAX_TOTAL_PER_DAY - coffeeSum;    //ile może być jesze kawy tego dnia

			if (coffeeToAdd<=rest_for_coffee_portion)   //gdy ta porca jest mniejsza od pozostałego limitu kawy
				coffeeSum += coffeeToAdd;
            else if(rest_for_coffee_portion > 0)    //porca jest wieksza od limitu  ale limit jeszcze jest do wykozystania
                {
                item->setCoffeeQuantity(rest_for_coffee_portion);   //w tej czynnosci ustawiamy wartoc spozytej kawy na reszte limitu
                coffeeSum = MAX_TOTAL_PER_DAY;  //sume kawy ustawiamy na max
                }
			else    //nadmiar kawy
				{
                delete (*collection)[i];
                collection->erase(collection->begin()+i);
                continue;
				}
            /*
			Factors _afterCoffee;
			if(i>0){
				_afterCoffee = item->factorsAfter((*collection)[i-1]);
				if(_afterCoffee.getY() > Factors::MAX_Y){
					collection->erase(collection->begin()+i);
				}*///saturacja w factorsAfter()
			}
		}

	return true;
};

void Coffee::factorsAfter(Action* previousAction, int current_total_coffee_quantity){

	double alpha_modifier = modificationAlpha(this->coffee_quantity,current_total_coffee_quantity); //modyfikator współczynnika a
	double y_modifier= increaseY(this->coffee_quantity);    //modyfaikator wartości y
	Factors previousFactors = previousAction->getFactorsAfter();

    int TimeBetween = (this->begin_end.getBegin()) - (previousAction->getTimeRange().getEnd());

	if (TimeBetween<0)
		return;

	double newY = std::min(previousFactors.getY()-previousFactors.getA()*TimeBetween+y_modifier, Factors::MAX_Y);
	double newA = previousFactors.getA() * alpha_modifier;

	factors_after = Factors(newY, newA);
};

double Coffee::increaseY(int coffeePortion){
	/*
	 * przyrost (y+) poziomu aktywnoœci w zale¿noœci od iloœci
	 * wypitej kawy w mililitrach (coffeePortion)
	 */
	if (coffeePortion > 0)
		return Y_MULTIPLIER*sqrt(coffeePortion/30);
	else
		return 0;
};

double Coffee::modificationAlpha(int coffeePortion_current, int coffeePortion_sum){
	return A_MULTIPLIER*(1 - sqrt(coffeePortion_current)/300)*(0.84 + sqrt(coffeePortion_sum)/300);                       ///zmienić !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!1
};

string Coffee::toString() const{
	string text = "COFFEE"+string("\t") + "START: "	+ string(minToString(begin_end.getBegin()))
			+ string("\t")+string("STOP: ")
			+ minToString(begin_end.getEnd()) + string("\t") + "Portion: "
			+ std::to_string(coffee_quantity) + "ml \n";
	return text;
};

bool Coffee::update(std::vector<Action*>* collection, Factors& start_factors){

    int drinked_coffee = 0;
    Coffee fictionStarter(0,0,start_factors);
    Action* previous = &fictionStarter;

	for (Action* x : *collection){
		Coffee* item = dynamic_cast<Coffee*>(x);
			if(item == this){
                drinked_coffee += item->getCoffeeQuantity();
				item->factorsAfter(previous,drinked_coffee);

				return true;
			}
			else if(item != nullptr)
                {
                drinked_coffee += item->getCoffeeQuantity();
                }


        previous = x;
	}
	return false;
}


Action* Coffee::randomAction(TimeRange range) const{
	int rndQuantity = generateRandom(1, MAX_TOTAL_PER_DAY);  //ustawiam dawnkę randomową. Od 1 do 600 ml.
	Coffee *ptrCoffee = new Coffee(range, rndQuantity);
	return ptrCoffee;
};

Action* Coffee::clone() const{
	Coffee* ptrCoffee = new Coffee;
	*ptrCoffee = *this;
	return ptrCoffee;
}

Action* Coffee::dividingByRange(TimeRange &range){
	return nullptr;
}


void Coffee::setA_Multiplier(double a_multi)//->0 zwiększony wpływ kawy, -> 1 zmniejszonu
    {
    if(a_multi <= 0 || a_multi > 1)
        A_MULTIPLIER = 1;
    else
        A_MULTIPLIER = a_multi;

    }

void Coffee::setY_Multiplier(double y_multi)
    {
    if(y_multi < 0 )
        Y_MULTIPLIER = -y_multi;
    else if(y_multi == 0 )
        Y_MULTIPLIER = 1;
    else
        Y_MULTIPLIER = y_multi;

    }
