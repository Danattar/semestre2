#ifndef TRIANGLE_H
#define TRIANGLE_H

using namespace std;

class Triangle {
public:
	Triangle();
	Triangle(double base, double hauteur);
	void setBase(const double);
	void setHauteur(const double);
	double getBase() const;
	double getHauteur() const;
	double surface() const;
	void details() const;

private:
	double base;
	double hauteur;
};

#endif