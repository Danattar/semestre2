#include "Rectangle.h"
#include <iostream>


void Rectangle::setLargeur(double largeur) {
	if (largeur > 0) {
		this->largeur = largeur;
	}
}
void Rectangle::setLongueur(double longueur) {
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
	cout << "Largeur = " << getLargeur() << endl
		 << "Longueur = " << getLongueur() << endl
		 << "Surface = " << surface() << endl;
}