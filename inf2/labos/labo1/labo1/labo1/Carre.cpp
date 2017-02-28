/*
-----------------------------------------------------------------------------------
Laboratoire	: 01 - Class
Fichier		: Carre.cpp
Auteur(s)	: Frédéric Korradi et Adrien Barth
Date		: 22.02.2017

But			: Mettre a disposition les fonctions membres de la classe carre.

Remarque(s) :	---

Compilateur : MinGW-g++ 4.8.1
-----------------------------------------------------------------------------------
*/
#include "Carre.h"
#include <iostream>

Carre::Carre()
	: cote(.0)
{}

Carre::Carre(double cote)
	: cote(cote)
{}

void Carre::setCote(const double cote) {
	if (cote > 0) {
		this->cote = cote;
	}
}
double Carre::getCote() const {
	return cote;
}
double Carre::surface() const {
	return cote * cote;
}
void Carre::details() const {
	cout << "--- CARRE ---" << endl
		<< "Cote: " << getCote() << endl;
}