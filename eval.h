#pragma once
#include <string>
using namespace std;

class Point
{
public:
	Point();
	Point(double x, double y, string str);
	~Point();
	
	
	double getX();
	double getY();
	double setX(double x);
	double setY(double y);
	void SetNom(string nom); 
	void saisir();
	void affiche();
	double distance(Point P1 );
	Point additionere(Point pt, string nom);

	

	
private:
	double x;
	double y;
	string nom;
};
/*
Point::Point()
{
}

inline Point::Point(double x, double y, string str)
{
}

inline Point::SetNom(string nom)
{
}

Point::~Point()
{
}
class carré
{
public:
	carré();
	~carré();

private:

};

carré::carré()
{
}

carré::~carré()
{
}
*/