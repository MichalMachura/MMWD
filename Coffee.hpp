/*
 * Coffee.hpp
 *
 *  Created on: 16 lis 2018
 *      Author: Dorotka
 */

#ifndef COFFEE_HPP_
#define COFFEE_HPP_

#include "Action.hpp"
#include <iostream>

class Coffee : public Action{
private:
	int coffee_quantity;
	const static int MAX_TOTAL_PER_DAY=1500; //1500ml dawka
	const static int MIN_PORTION=60;  //60 ml porcja minimalna

	Factors factorsAfter(Action* previous);  //Pomocnicza do update (...) i checkRestrictionAndRetake(...)
												//Funkcja liczy wskazniki po wyk czynnosci i ustawia wartosc składową klasy
public:

	// --- KONSTRUKTORY ---
	Coffee();
	Coffee(int _begin, int _quanities);
	Coffee(TimeRange _anTimeRng, int _quanities);
	Coffee(int _begin, int _quanities, Factors _factors_after);
	Coffee(Coffee&);

	// --- GET FUNCTIONS:
	int getCoffeeQuantity();
	const static int  getMaxTotalPerDay();

	// ---  checkRestrictionAndRetake(...)
	//	Sprawdza czy nie przekroczono ilości kawy w wektorze
	bool checkRestrictionAndRetake(std::vector<Action*>*collection);

	// --- toString() ---
	// do wyswietlania czasu czasu i ilosci snu
	string toString();

	// --- update()
	// 	Przeszukuje wektor i oblicza we wszystkich Coffee składową factors_after
	bool update(std::vector<Action*>* collection, Factors& start_factors);

	// --- randomAction(...) ---
	//	Zwraca wskaznik (stworzony przez new) na losowa Coffe w początku TimeRange
	//		o losowej dawce z zakresu 1-MAX_COFFEE_PER_DAY
	Action* randomAction(TimeRange range);


	// --- clone() ---
	// 	kopiuje this do nowego wskaznika na Coffee utworzonego przez new
	Action* clone();

	// --- dividingByRange(...) ---
	// 	Dla Coffee nic nie robi
	Action* dividingByRange(TimeRange &range);

	~Coffee(){;}

};



#endif /* COFFEE_HPP_ */
