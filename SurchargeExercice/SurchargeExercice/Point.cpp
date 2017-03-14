#include "Point.h"
#include <iostream>
using namespace std;


Point::~Point()
{
}

ostream & operator<<(ostream& os, const Point& mp)
{
	// La surcharge du Cout
	os << mp.a << '/' << mp.b << '\n';
	return os;
}

istream & operator >> (istream& is, Point& mp)
{
	// La surcharge du Cin
	is >> mp.a >> mp.b;
	return is;
}

Point operator+(Point un, Point deux)
{
	// Surcharge de l'operateur +
	Point p;
	p.a = un.a + deux.a;
	p.b = un.b + deux.b;
	return p;
}

Point operator-(Point un, Point deux)
{
	// Surcharge de l'operateur -
	Point p;
	p.a = un.a - deux.a;
	p.b = un.b - deux.b;
	return p;
}

Point operator+=(Point un, Point deux)
{
	// Surcharge de l'operateur +=
	Point p;
	p.a = un.a;
	p.b = un.b;
	p.a += deux.a;
	p.b += deux.b;
	return p;
}

Point operator-=(Point un, Point deux)
{
	// Surcharge de l'operateur -=
	Point p;
	p.a = un.a;
	p.b = un.b;
	p.a -= deux.a;
	p.b -= deux.b;
	return p;
}

Point operator*=(Point un, Point deux)
{
	// Surcharge de l'operateur *=
	Point p;
	p.a = un.a;
	p.b = un.b;
	p.a *= deux.a;
	p.b *= deux.b;
	return p;
}

Point operator/=(Point un, Point deux)
{
	// Surcharge de l'operateur /=
	Point p;
	p.a = un.a;
	p.b = un.b;
	p.a /= deux.a;
	p.b /= deux.b;
	return p;
}

void compaegal(Point un, Point deux)
{
	// Surcharge de la comparaison =
	if (un.a == deux.a) {
		cout << "OK" << "\n";
	}
	if (un.a != deux.a) {
		cout << "NOK" << "\n";
	}
}

Point operationegal (Point un)
{
	// Surcharge de l'operation =
	Point p;
	p.a = un.a;
	p.b = un.b;
	return p;
}
