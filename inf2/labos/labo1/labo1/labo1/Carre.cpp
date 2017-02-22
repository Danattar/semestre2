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