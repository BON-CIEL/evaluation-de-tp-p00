#include "eval.h"
#include <iostream>
using namespace std;


Point::Point()
{
}

Point::Point(double x, double y, string str)
{
}
Point::~Point()
{
}

double Point::getX()
{
	
	return 0.0;
}

double Point::getY()
{
	
	return 0.0;
}

double Point::setX(double x)
{
	this->x = 2;

	 return setX(x);
}

double Point::setY(double y)
{
	this->y = 3;
	return setY(y);
}


void Point::SetNom(string nom)
{
}

void Point::saisir()
{
}

void Point::affiche()
{
	cout << "le poit A a pour coordonée \n " << endl;
	cout << "x = \n " << endl;
	cout << setX(x);


	cout << "le poit B a pour coordonée \n " << endl;
	cout << "x = \n " << endl;
	cout << setY(y);
}


double Point::distance(Point P1)
{
	return 0.0;
}

Point Point::additionere(Point pt, string nom)
{
	return Point();
}

