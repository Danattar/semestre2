#ifndef CERCLE_H
#define CERCLE_H

using namespace std;

class Cercle {
public:
	// spécifie les dimensions du rectangle
	void setRayon(double);
	double getRayon() const;
	// calcule et renvoie la surface du rectangle
	double surface() const;
	void details() const;

private:
	// stocke les dimensions
	double rayon;
};

#endif