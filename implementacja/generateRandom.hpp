/*
 * generateRandom.hpp
 */

#ifndef GENERATERANDOM_HPP_
#define GENERATERANDOM_HPP_

#include  <cstdlib>
#include <ctime>
#include<iostream>
/*=================GENERATERANDOM=================
 * Funkcja generateRandom(low, high) zwraca losowa
 * liczbe calkowita z zakrasu low do high
 * ===============================================
 */
/********************************************************************************
*   klasa ktorej obiekty generuja liczbe z przedzialu low to high
*   obiekty sa funktorami => mozna uzywac jak funkcje
*   istnieje jeden obiekt, nazwany tak jak wczesniejsza funcja generateRandom =>
*   => kompatybinosc z napisanym juz kodem uzywajacym tej funkcji
*   ale bez problemu srand();
********************************************************************************/

class GenerateRandom
    {
    private:
        static bool is_initialized;

    public:
        GenerateRandom();
        int operator()(int low, int high);  //losowanie z przedzi³u [low ; high] z high wlacznie
    };

extern GenerateRandom  generateRandom; ///funktor

#endif /* GENERATERANDOM_HPP_ */
