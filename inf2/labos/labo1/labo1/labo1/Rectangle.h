#ifndef RECTANGLE_H
#define RECTANGLE_H

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

#endif