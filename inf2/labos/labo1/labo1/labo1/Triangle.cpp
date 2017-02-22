#include "Triangle.h"
#include <iostream>

Triangle::Triangle()
	: base(.0), hauteur(.0)
{}

Triangle::Triangle(double base, double hauteur)
	: base(base), hauteur(hauteur)
{}

void Triangle::setBase(const double base) {
	if (base > 0) {
		this->base = base;
	}
}
void Triangle::setHauteur(const double hauteur) {
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
	cout << "--- TRIANGLE ---" << endl
		<< "Base: " << getBase() << endl
		<< "Hauteur: " << getHauteur() << endl;
}