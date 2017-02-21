#include "Cercle.h"
#include <iostream>


void Cercle::setRayon(double rayon) {
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
	cout << "Rayon = " << getRayon() << endl
		<< "Surface = " << surface() << endl;
}