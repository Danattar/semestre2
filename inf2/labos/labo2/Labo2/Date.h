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
#include <string>

enum class Mois {
	JANVIER, FEVRIER, MARS, AVRIL,
	MAI, JUIN, JUILLET, AOUT, SEPTEMBRE,
	OCTOBRE, NOVEMBRE, DECEMBRE
};

class Date;

std::ostream& operator << (std::ostream&, const Date&);
std::istream& operator >> (std::istream& os, const Date&);
class Date {
	friend std::ostream& operator << (std::ostream&, const Date&);
	friend std::istream& operator >> (std::istream&, const Date&);
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
	const std::string MOIS[12] = { "janvier", "fevrier", "mars", "avril", "mais", "juin",
		"juillet", "aout", "septembre", "octobre", "novembre",
		"decembre" }; //obligé de mettre la taille de l'array, sinon erreur lors de la
					  //déclaration de l'attribut naissance dans la classe Personne.h
};

#endif
