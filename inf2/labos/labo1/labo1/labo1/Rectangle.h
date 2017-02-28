/*
-----------------------------------------------------------------------------------
Laboratoire	: 01 - Class
Fichier		: Rectangle.h
Auteur(s)	: Frédéric Korradi et Adrien Barth
Date		: 22.02.2017

But			: Mettre a disposition un classe rectangle.

Remarque(s) : ---

Compilateur : MinGW-g++ 4.8.1
-----------------------------------------------------------------------------------
*/
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