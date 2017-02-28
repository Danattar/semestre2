/*
-----------------------------------------------------------------------------------
Laboratoire	: 01 - Class
Fichier		: Rectangle.cpp
Auteur(s)	: Frédéric Korradi et Adrien Barth
Date		: 22.02.2017

But			: Mettre a disposition les fonctions membres de la classe rectangle.

Remarque(s) :	---

Compilateur : MinGW-g++ 4.8.1
-----------------------------------------------------------------------------------
*/
#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle()
	: largeur(.0), longueur(.0)
{}

Rectangle::Rectangle(double largeur, double longueur)
	: largeur(largeur), longueur(longueur)
{}

void Rectangle::setLargeur(const double largeur) {
	if (largeur > 0) {
		this->largeur = largeur;
	}
}
void Rectangle::setLongueur(const double longueur) {
	if (longueur > 0) {
		this->longueur = longueur;
	}
}
double Rectangle::getLargeur() const {
	return largeur;
}
double Rectangle::getLongueur() const {
	return longueur;
}

double Rectangle::surface() const {
	return longueur * largeur;
}
void Rectangle::details() const {
	cout << "--- RECTANGLE ---" << endl
		<< "Largeur: " << getLargeur() << endl
		<< "Longueur: " << getLongueur() << endl;
}