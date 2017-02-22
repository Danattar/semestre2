#ifndef CERCLE_H
#define CERCLE_H

using namespace std;

class Cercle {
public:
	Cercle();
	Cercle(double rayon);
	void setRayon(const double);
	double getRayon() const;
	double surface() const;
	void details() const;

private:
	double rayon;
};

#endif