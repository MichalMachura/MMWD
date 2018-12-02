/*
 * Coffee.hpp
 *
 *  Created on: 16 lis 2018
 *      Author: Dorotka
 */

#ifndef COFFEE_HPP_
#define COFFEE_HPP_

#include "Action.hpp"
//#include <algorithm>
#include <cmath>
#include <vector>
#include<iomanip>

class Coffee : public Action{
private:
	int coffee_quantity;
	const static int MAX_TOTAL_PER_DAY=1500; //1500ml dawka
	const static int MIN_PORTION=60;  //60 ml porcja minimalna
    static double A_MULTIPLIER;
    static double Y_MULTIPLIER;

	void factorsAfter(Action* previousAction, int current_total_coffee_quantity);  //Pomocnicza do update (...) i checkRestrictionAndRetake(...)
												//Funkcja liczy wskazniki po wyk czynnosci i ustawia wartosc składową klasy
    	/* INCREASEY(int coffeePortion)
	 * 	funkcja oblicza przyrost (y+) poziomu aktywnoœci w zale¿noœci
	 * 	od iloœci wypitej kawy w mililitrach (coffeePortion)
	 *
	 *  Wartosci od + 0 do + 14 dla kawy (0,600)ml
	 */
	static double increaseY(int coffeePortion);

	/* MODIFICATIONALPHA(int coffeePortion)
	 * 	funkcja obliczajaca modyfikator (a*) alfy w zale¿noœci
	 * 	od iloœci wypitej kawy w mililitrach (coffePortion)
	 * 	zwraca wartosci (1,0.9) dla kawy (0,600)ml
	 */
	static double modificationAlpha(int coffeePortion_current, int coffeePortion_sum);

public:

	// --- KONSTRUKTORY ---
	Coffee();
	Coffee(int _begin, int _quanities);
	Coffee(TimeRange _anTimeRng, int _quanities);
	Coffee(int _begin, int _quanities, Factors _factors_after);
	Coffee(Coffee&);

	// --- GET FUNCTIONS:
	int getCoffeeQuantity() const;
	static int  getMaxTotalPerDay();

	void setCoffeeQuantity(int );
	static void setA_Multiplier(double);
	static void setY_Multiplier(double);

	// ---  checkRestrictionAndRetake(...)
	//	Sprawdza czy nie przekroczono ilości kawy w wektorze
	static void checkRestrictionAndRetake(std::vector<Action*>*collection, DayActions* dayActions);

	// --- toString() ---
	// do wyswietlania czasu czasu i ilosci snu
	std::string toString() const;

	// --- update()
	// 	Przeszukuje wektor i oblicza we wszystkich Coffee składową factors_after
	void update(std::vector<Action*>* collection, Factors& start_factors);

	// --- randomAction(...) ---
	//	Zwraca wskaznik (stworzony przez new) na losowa Coffe w początku TimeRange
	//		o losowej dawce z zakresu 1-MAX_COFFEE_PER_DAY
	Action* randomAction(TimeRange range) const;


	// --- clone() ---
	// 	kopiuje this do nowego wskaznika na Coffee utworzonego przez new
	Action* clone() const;

	// --- dividingByRange(...) ---
	// 	Dla Coffee nic nie robi
	Action* divideByRange(TimeRange &range);

	~Coffee(){}

};



#endif /* COFFEE_HPP_ */
