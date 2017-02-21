#ifndef CARRE_H
#define CARRE_H

using namespace std;

class Carre {
public:
	// spécifie les dimensions du rectangle
	void setCote(double);
	double getCote() const;
	// calcule et renvoie la surface du rectangle
	double surface() const;
	void details() const;

private:
	// stocke les dimensions
	double cote;
};

#endif