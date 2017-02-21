#include "Carre.h"
#include "Cercle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <cstdlib>

using namespace std;

int main() {
	//nouveau rectangle
	Carre carre;
	Cercle cercle;
	Rectangle rectangle;
	Triangle triangle;

	carre.setCote(3.14);
	carre.details();

	cercle.setRayon(1.69);
	cercle.details();

	rectangle.setLargeur(28);
	rectangle.setLongueur(42);
	
	triangle.setBase(13);
	triangle.setHauteur(15);
	triangle.details();

	system("PAUSE");
	return 0;
}