/*
-----------------------------------------------------------------------------------
Laboratoire	: 01 - Class
Fichier		: Triangle.h
Auteur(s)	: Frédéric Korradi et Adrien Barth
Date		: 22.02.2017

But			: Mettre a disposition une classe triangle.

Remarque(s) :	---

Compilateur : MinGW-g++ 4.8.1
-----------------------------------------------------------------------------------
*/
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