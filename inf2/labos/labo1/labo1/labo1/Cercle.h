/*
-----------------------------------------------------------------------------------
Laboratoire	: 01 - Class
Fichier		: Cercle.h
Auteur(s)	: Frédéric Korradi et Adrien Barth
Date		: 22.02.2017

But			: Mettre a disposition une classe cercle.

Remarque(s) :	---

Compilateur : MinGW-g++ 4.8.1
-----------------------------------------------------------------------------------
*/
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