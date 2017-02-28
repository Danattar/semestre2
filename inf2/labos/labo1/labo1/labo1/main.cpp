/*
-----------------------------------------------------------------------------------
Laboratoire	: 01 - Class
Fichier		: main.cpp
Auteur(s)	: Frédéric Korradi et Adrien Barth
Date		: 22.02.2017

But			: Corps principal du programme.
			  Test toutes les fonctions membres des classes Rectangle,
			  Triangle, Carre, Cercle.

Remarque(s) :	---

Compilateur : MinGW-g++ 4.8.1
-----------------------------------------------------------------------------------
*/

#include "Carre.h"
#include "Cercle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <iostream>

using namespace std;

int main() {
	// Constructeur par défaut + setter
	cout << "Constructeur par defaut + setter :" << endl;
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

	// Constructeur surcharge
	cout << "Constructeur surcharge :" << endl;
	Carre carre2(34);
	Cercle cercle2(1.618);
	Rectangle rectangle2(3, 4);
	Triangle triangle2(-2, -5);

	carre2.details();
	cout << "Surface: " << carre2.surface() << endl << endl;

	cercle2.details();
	cout << "Surface: " << cercle2.surface() << endl << endl;

	rectangle2.details();
	cout << "Surface: " << rectangle2.surface() << endl << endl;

	triangle2.details();
	cout << "Surface: " << triangle2.surface() << endl << endl;

	//Constructeur par defaut sans setter (valeurs a 0)
	cout << "Constructeur par defaut sans setter (valeurs a 0) :" << endl;
	Carre carre3;
	Cercle cercle3;
	Rectangle rectangle3;
	Triangle triangle3;

	carre3.details();
	cout << "Surface: " << carre3.surface() << endl << endl;

	cercle3.details();
	cout << "Surface: " << cercle3.surface() << endl << endl;

	rectangle3.details();
	cout << "Surface: " << rectangle3.surface() << endl << endl;

	triangle3.details();
	cout << "Surface: " << triangle3.surface() << endl << endl;

	return EXIT_SUCCESS;
}