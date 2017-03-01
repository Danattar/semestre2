/*
-----------------------------------------------------------------------------------
Laboratoire	: 02 - Personnes
Fichier		: Date.h
Auteur(s)	: Frédéric Korradi et Adrien Barth
Date		: 28.02.2017

But			: TODO

Remarque(s) :	la variable annee n'est pas signée et est un long long, dans le cas 
				où l'on devrait utiliser cette classe pour une date précédent J.C.

Compilateur : MinGW-g++ 4.8.1
-----------------------------------------------------------------------------------
*/
#ifndef DATE_H
#define DATE_H


enum class Mois {
	JANVIER, FEVRIER, MARS, AVRIL,
	MAI, JUIN, JUILLET, AOUT, SEPTEMBRE,
	OCTOBRE, NOVEMBRE, DECEMBRE
};

class Date {
public:
	
	Date();
	
	Date(short jour, Mois mois, long long annee);
	void setJour(unsigned short jour);
	void setMois(Mois mois);
	void setAnnee(long long annee);
	void setDate(short jour, Mois mois, long long annee);
	short getJour();
	Mois getMois();
	long long getAnnee();
	bool getValid();

	//TODO Operateurs de flux
private:
	unsigned short jour;
	Mois mois;
	long long annee;
	//TODO gestion de dateValide...
	bool dateValide = 1;
};

#endif
