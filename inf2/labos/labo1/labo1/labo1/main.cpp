#include "Carre.h"
#include "Cercle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	// Constructeur par défaut + setter
	Carre carre1;
	Cercle cercle1;
	Rectangle rectangle1;
	Triangle triangle1;

	carre1.setCote(3.14);
	carre1.details();
	cout << "Surface: " << carre1.surface() << endl << endl;

	cercle1.setRayon(1.618);
	cercle1.details();
	cout << "Surface: " << cercle1.surface() << endl << endl;

	rectangle1.setLargeur(28);
	rectangle1.setLongueur(42);
	rectangle1.details();
	cout << "Surface: " << rectangle1.surface() << endl << endl;

	triangle1.setBase(13);
	triangle1.setHauteur(15);
	triangle1.details();
	cout << "Surface: " << triangle1.surface() << endl << endl;

	// Constructeur
	Carre carre2(34);
	Cercle cercle2(1.618);
	Rectangle rectangle2(3, 4);
	Triangle triangle2(10, 2);

	carre2.details();
	cout << "Surface: " << carre2.surface() << endl << endl;
	cercle2.details();
	cout << "Surface: " << cercle2.surface() << endl << endl;
	rectangle2.details();
	cout << "Surface: " << rectangle2.surface() << endl << endl;
	triangle2.details();
	cout << "Surface: " << triangle2.surface() << endl << endl;

	return EXIT_SUCCESS;
}