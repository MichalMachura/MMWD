//============================================================================
// Name        : Coffee.cpp
// Author      : Dorota Dydo-Rozniecka
// Title       : TESTOWANIE Action.hpp, Coffee.hpp, Sleep.hpp
//============================================================================



#include <iostream>
#include "TimeRangeFactor.hpp"
#include "Action.hpp"
#include "Coffee.hpp"
#include "Sleep.hpp"

using namespace std;

int main() {
	///PSEUDO TESTY

	TimeRange timeR(100,903);
	Sleep x(2,1);

	Sleep y(timeR);
	Sleep z(1000,999);

	std::vector<Action*> vec;

	TimeRange timeR2(34,903);
	Coffee c(timeR2, 1400);
	Coffee c2(55,400);

	TimeRange timeR3(905, 910);


	vec.push_back(&x);
	vec.push_back(&c);
	vec.push_back(&c2);
	vec.push_back(&y);
	vec.push_back(&z);

	//c2.checkRestrictionAndRetake(&vec);

	Factors anFac;
	anFac = Factors(0,1);

	x.getFactorsAfter().setY(0.7787);

	x.update(&vec, anFac);
	c.update(&vec, anFac);

	Coffee c3(1300, 26, anFac);
	vec.push_back(&c3);

	for (unsigned int i=0; i<vec.size(); i++){

		double  y = (vec[i]->getFactorsAfter()).getY();
		double  a = (vec[i]->getFactorsAfter()).getA();
		cout<<"Vec"<<i<<":\t"<<vec[i]->toString()<<"\t y: "<<y<<"\t a: "<<a<<endl;
	}
	cout<<"-------------\n\n";
	x.checkRestrictionAndRetake(&vec);

	c.checkRestrictionAndRetake(&vec);
	c.update(&vec, anFac);

	for (unsigned int i=0; i<vec.size(); i++){
		int begin = vec[i]->getBegin();
		int end = vec[i]->getEnd();

		double  y = (vec[i]->getFactorsAfter()).getY();
		double  a = (vec[i]->getFactorsAfter()).getA();
		cout<<"Vec"<<i<<":\t"<<"Begin: "<< begin<<"\tEnd: "<< end<<"\t y: "<<y<<"\t a: "<<a<<endl;
	}

	cout<<"\n ------------\n "<<c3.toString()<<endl;



	cout<<x.toString();
	cout<<c.toString();

	cout<<"Coffee:\n"<<c.getEnd()<<"\t"<<c.getCoffeeQuantity()<<endl;





	return 0;
};
