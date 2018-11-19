/*
 * TimeRangeFactor.hpp
 *
 * Zawiera:
 *  - klasy:
 * 		- TimeRange,
 * 		- Factors
 * 	- funkcje pomocnicze do konwersji min na godziny:
 * 		- minToHours(int mins)
 * 		- minToString (int mins)
 *
 */

#ifndef TIMERANGEFACTOR_HPP_
#define TIMERANGEFACTOR_HPP_

#include <array>
#include <string>
#include <cmath>

#include "generateRandom.hpp" // zawiera funkcje generateRandom(int, int)


/* --------- STALE ----------*/
const int MIN_IN_DAY=24*60;		//ile jest min w dobie
const double MAX_Y = 100;		// max watosc wspólczynnika y



/* --------- TIME RANGE ---------*/
class TimeRange{
private:
	int begin;
	int end;

public:


	TimeRange();						//Domyslnie begin=0, end=1
	TimeRange(TimeRange& _timeRange);	//Zwykly konstruktor kopiujacy
	TimeRange(int _begin, int _end);	//Ustawia podane watosci begin i end


	//GET FUNCTIONS:
	int getBegin();
	int getEnd();

	//SET FUNCTIONS:
	void setBegin(int _beg);
	void setEnd(int _end);


	int length();   					// oblicza dlugosc trwania TimeRange

	/* Funkcja isEqual zaimplementowana przez Michala*/
	//bool isEqual(TimeRange& second);

	TimeRange randomTimeRange();									// losowy przedzial czasu w jednej dobie
	TimeRange randomTimeRange(int _begin,int _end);					// losowy przedzial czasu miedzy podanymi wartosciami czasu
	TimeRange randomTimeRange(int _begin,int _end,int _length);		// losowy przedzial czasu miedzy podanymi wartosciami czasu
																		// ale o okreslonej dlugosci

};


/* ---------- FACTORS -----------*/

class Factors {
private:
	double y;
	double a;

public:
	Factors();											//domyslnie y =0 oraz a =0
	Factors(Factors&);									// konstruktor kopiujacy
	Factors(double _y, double _alpha);					// ustawia wartosci przy tworzeniu obiektu

	//GET FUNCTIONS:
	double getY();
	double getA();
	
	//SET FUNCTIONS:
	void setY (double _y);



	/* ALPH(int m)
	 *	 funkcja oblicza współczynnik (alfa) spadku aktywności
	 * 	w zależności od snu w minutach (m).
	 */
	static double alph(int m);



	/* INCREASEY(int coffeePortion)
	 * 	funkcja oblicza przyrost (y+) poziomu aktywności w zależności
	 * 	od ilości wypitej kawy w mililitrach (coffeePortion)
	 *
	 *  Wartosci od + 0 do + 14 dla kawy (0,600)ml
	 */
	static double increaseY(int coffeePortion);



	/* MODIFICATIONALPHA(int coffeePortion)
	 * 	funkcja obliczajaca modyfikator (a*) alfy w zależności
	 * 	od ilości wypitej kawy w mililitrach (coffePortion)
	 * 	zwraca wartosci (1,0.9) dla kawy (0,600)ml
	 */
	static double modificationAlpha(int coffeePortion);
};




std::array<int,2> minToHours (int mins); 		//Zamiana minut na godziny. Zwraca tablicę.
												//element [0] to liczba minut, element [1] to ilosc godzin
std::string minToString (int mins);				// do wyswietlania min jako licze godzin i minut


#endif /* TIMERANGEFACTOR_HPP_ */
