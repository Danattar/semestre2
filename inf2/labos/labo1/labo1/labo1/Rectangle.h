#ifndef RECTANGLE_H
#define RECTANGLE_H

using namespace std;

class Rectangle {
public:
	Rectangle();
	Rectangle(double largeur, double longueur);
	void setLargeur(const double);
	void setLongueur(const double);
	double getLargeur() const;
	double getLongueur() const;
	double surface() const;
	void details() const;

private:
	double largeur;
	double longueur;
};

#endif