#include "Carre.h"
#include <iostream>

void Carre::setCote(double cote) {
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
	cout << "Côté = " << getCote() << endl 
		 << "Surface = " << surface() << endl;
}