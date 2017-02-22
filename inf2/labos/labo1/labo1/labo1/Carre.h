#ifndef CARRE_H
#define CARRE_H

using namespace std;

class Carre {
public:
	Carre();
	Carre(double cote);
	void setCote(const double);
	double getCote() const;
	double surface() const;
	void details() const;

private:
	double cote;
};

#endif