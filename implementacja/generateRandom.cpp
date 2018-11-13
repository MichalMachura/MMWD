/*
 * generateRandom.cpp
 *
 *  Created on: 10 lis 2018
 *      Author: Dorotka
 */

#include "generateRandom.hpp"


int generateRandom(int low, int high){

	//srand(time(0));
	int rndInt;
	if (low>=0 && high>=low)
		rndInt = rand() % (high-low+1) + low;
	else
		rndInt = 0;
	return rndInt;
}
