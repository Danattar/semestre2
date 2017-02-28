/*
-----------------------------------------------------------------------------------
Laboratoire	: 01 - Class
Fichier		: Carre.h
Auteur(s)	: Frédéric Korradi et Adrien Barth
Date		: 22.02.2017

But			: Mettre a disposition une classe rectangle.

Remarque(s) :	---

Compilateur : MinGW-g++ 4.8.1
-----------------------------------------------------------------------------------
*/
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