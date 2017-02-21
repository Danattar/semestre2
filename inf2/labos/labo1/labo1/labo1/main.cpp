#include "main.h"
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
	return 0;
}