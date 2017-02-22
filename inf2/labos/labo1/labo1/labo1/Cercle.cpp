#include "Cercle.h"
#include <iostream>

Cercle::Cercle()
	: rayon(.0)
{}

Cercle::Cercle(double rayon)
	: rayon(rayon)
{}

void Cercle::setRayon(const double rayon) {
	if (rayon > 0) {
		this->rayon = rayon;
	}
}
double Cercle::getRayon() const {
	return rayon;
}
double Cercle::surface() const {
	return 3.141592653581 * rayon * rayon;
}
void Cercle::details() const {
	cout << "--- CERCLE ---" << endl
		<< "Rayon: " << getRayon() << endl;
}