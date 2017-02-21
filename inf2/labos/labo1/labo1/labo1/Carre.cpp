#include <iostream>
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