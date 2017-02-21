#include <iostream>
using namespace std;
class Rectangle {
public:
	// spécifie les dimensions du rectangle
	void setLargeur(double);
	void setLongueur(double);
	double getLargeur() const;
	double getLongueur() const;
	// calcule et renvoie la surface du rectangle
	double surface() const;
	void details() const;

private:
	// stocke les dimensions
	double largeur;
	double longueur; 


};

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