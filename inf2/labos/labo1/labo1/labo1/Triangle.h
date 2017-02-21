#ifndef TRIANGLE_H
#define TRIANGLE_H

using namespace std;

class Triangle {
public:
	// spécifie les dimensions du Triangle
	void setBase(double);
	void setHauteur(double);
	double getBase() const;
	double getHauteur() const;
	// calcule et renvoie la surface du Triangle
	double surface() const;
	void details() const;

private:
	// stocke les dimensions
	double base;
	double hauteur;
};

#endif