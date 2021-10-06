#include "Factors.hpp"

/*------ METHODES FROM CLASS FACTORS -------*/

const double Factors::MAX_Y = 100;

Factors::Factors(){
	y =  0;
	a = 0;
};

Factors::Factors(const Factors& _factors){
	y = _factors.y;
	a = _factors.a;
};

Factors::Factors(double _y, double _alpha){
	if (_y<=MAX_Y && y>=0)
		y = _y;
	else
		y = 0;
	a = _alpha;
};


double Factors::getY() const{
	return y;
};

double Factors::getA() const{
	return a;
};


void Factors::setY (double _y){
	y = _y;
};

void Factors::setA (double _a){
	a = _a;
};

Factors& Factors::operator=(const Factors& second)
    {
    y = second.y;
    a = second.a;

    return *this;
    }


std::ostream& operator<<(std::ostream& out, const Factors& obj)
    {
    out<<"y = "<<std::setw(6)<<std::left<<obj.y<<"\t\ta = "<<std::setw(5)<<std::left<<obj.a<<"\n"<<std::fixed;

    return out;
    }
