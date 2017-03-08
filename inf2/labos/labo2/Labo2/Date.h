/*
-----------------------------------------------------------------------------------
Laboratoire	: 02 - Personnes
Fichier		: Date.h
Auteur(s)	: Frédéric Korradi et Adrien Barth
Date		: 28.02.2017

But			: Fichier de définition pour Date.cpp

Remarque(s) : La variable annee n'est pas signée et est un long long, dans le cas
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
std::istream& operator >> (std::istream& os, Date&);
std::istream& operator >> (std::istream& os, Mois&);

class Date {
	friend std::ostream& operator << (std::ostream&, const Date&);
	friend std::istream& operator >> (std::istream&, Date&);
	friend std::istream& operator >> (std::istream&, Mois&);

public:	
	Date();	
	Date(unsigned short jour, Mois mois, unsigned annee);
	void setJour(const unsigned short& jour);
	void setMois(const Mois& mois);
	void setAnnee(const unsigned& annee);
	void setDate(const unsigned short& jour, const Mois& mois, const unsigned& annee);
	short getJour() const;
	Mois getMois() const;
	long long getAnnee()  const;
	bool getValid() const;

private:
	unsigned short jour;
	Mois mois;
	unsigned annee;
	bool dateValide = 1;
	const std::string MOIS[12] = { "janvier", "fevrier", "mars", "avril", "mais", "juin",
		"juillet", "aout", "septembre", "octobre", "novembre",
		"decembre" };
};

#endif