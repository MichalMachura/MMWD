//============================================================================
// Name        : Coffee.cpp
// Author      : Dorota Dydo-Rozniecka
// Title       : TESTOWANIE TimeRangeFactors.hpp
//============================================================================



#include <iostream>
#include "TimeRangeFactor.hpp"

using namespace std;

int main() {


	TimeRange a;
	a = a.randomTimeRange(6,10);
	cout<<"Time Range:\n"<<a.getBegin()<<"\t"<<a.getEnd()<<endl;

	Factors b(0.8, 2.1);
	cout<<"Factors:\n"<<b.getY()<<"\t"<<b.getA()<<endl;


	array<int,2> mH;
	mH = minToHours(67);
	cout<<"Time:\n"<<minToString(76)<<endl;

	return 0;
};
