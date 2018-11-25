/*
 * Sleep.hpp
 *
 *  Created on: 16 lis 2018
 *      Author: Dorotka
 */

#ifndef SLEEP_HPP_
#define SLEEP_HPP_
//#include<string>
//#include<vector>
#include "Action.hpp"


class Sleep :public Action{
private:
	const static int MIN_SLEEP = 20; //jednorazowo minimum drzemki to 20min
	const static int MIN_DAY_SLEEP = 180; //180 minut = 3h
	Factors factorsAfter(); //funkcja pomocnicza, uzywana w Sleep::update(...)

    /* ALPH(int m)
	 *	 funkcja oblicza wspó³czynnik (alfa) spadku aktywnoœci
	 * 	w zale¿noœci od snu w minutach (m).
	 */
	static double alph(int m);

public:


// --- KONSTRUKTORY
	Sleep();
	Sleep (TimeRange _begin_end);
	Sleep (int _begin, int _end);

// --- ACTION'S VIRTUAL FUNCTIONS

	// --- checkRestrictionAndRetake(std::vector<Action*>* collection) ---
	// ! Wektor Collection MUSI!!! byc posegregowany CHRONOLOGICZNIE !
	// funkcja zwraca:
	// 	- false, gdy jest za mało snu w wektorze
	//	- true w pozostałych przypadkach
	// funkcja również łączy dwa przylegające sny w jeden.
	static bool checkRestrictionAndRetake(std::vector<Action*>* collection);

	// --- toString()
	// 	do wyswietlania Sleep
	string toString() const;

	// --- update()
	// 	Przeszukuje wektor i uaktualnia we wszystkich Sleep składową factors_after
	bool update(std::vector<Action*>* collection, Factors& start_factors);

	// --- randomAction ---
	// Zwraca wskaznik (stworzony przez new) na losowa Sleep w podanym TimeRange.
	Action* randomAction(TimeRange range) const;

	// --- clone() ---
	// 	kopiuje this do nowego wskaznika na Sleep utworzinego przez new
	Action* clone() const;

	// --- dividinByRange(...) ---
	//	jezeli range zawiera sie w czasie trwania Sleep to dzieli go na dwa snu:
	//		- jeden to this ze zmienionym czasem trwania,
	//		- a drugi, ten pozniejszy jest tworzony przez new i zwracany przez funkcje
	//	jak range nie zawiera sie w Sleep zwraca: nullptr
	Action* dividingByRange(TimeRange& range);

	~Sleep(){}
};


#endif /* SLEEP_HPP_ */
