#include "Triangle.h"
#include <iostream>


void Triangle::setBase(double base) {
	if (base > 0) {
		this->base = base;
	}
}
void Triangle::setHauteur(double hauteur) {
	if (hauteur > 0) {
		this->hauteur = hauteur;
	}
}
double Triangle::getBase() const {
	return base;
}
double Triangle::getHauteur() const {
	return hauteur;
}
double Triangle::surface() const {
	return (base * hauteur)/2;
}
void Triangle::details() const {
	cout << "Base = " << getBase() << endl
		<< "Hauteur = " << getHauteur() << endl
		<< "Surface = " << surface() << endl;
}