#include <stdlib.h>
#include "Point.h"

int main() {
	Point a1(5, 5), a2(10, 15);
	
	a1 = operationegal(a2);
	a1.affiche();
	
	Point b1(a1);
	b1.affiche();

	cout << a1;

	system("pause");
}