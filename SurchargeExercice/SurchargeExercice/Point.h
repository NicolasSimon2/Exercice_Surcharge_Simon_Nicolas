#pragma once
#include <iostream>
using namespace std;

class Point
{
	int a, b;
public:
	Point(int az = 0, int bz= 0) { a = az; b = bz; } ;
	Point(const Point& p) { a = p.a; b = p.b; };

	friend ostream& operator<< (ostream& os, const Point& mp);
	friend istream& operator>> (istream& is, Point& mp);

	friend Point operator+ (Point, Point);
	friend Point operator- (Point, Point);
	friend Point operator+= (Point, Point);
	friend Point operator-= (Point, Point);
	friend Point operator*= (Point, Point);
	friend Point operator/= (Point, Point);
	friend void compaegal(Point, Point);
	friend Point operationegal (Point);

	void affiche() const
	{
		cout << "coordonnees : " << a << " " << b << "\n";
	}

	~Point();
};

