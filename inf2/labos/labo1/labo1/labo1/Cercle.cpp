#include <iostream>
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

void Cercle::setRayon(double rayon) {
	if (rayon > 0) {
		this->rayon = rayon;
	}
}
double Cercle::getRayon() const {
	return rayon;
}
double Cercle::surface() const {
	return 3.141592653581 * rayon * rayon;
}
void Cercle::details() const {
	cout << "Rayon = " << getRayon() << endl
		<< "Surface = " << surface() << endl;
}