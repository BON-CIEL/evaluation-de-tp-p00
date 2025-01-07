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
	void setX(double x);
	void setY(double y);
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
