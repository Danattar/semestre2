/*
-----------------------------------------------------------------------------------
Laboratoire	: 02 - Personnes
Fichier		: Date.h
Auteur(s)	: Fr�d�ric Korradi et Adrien Barth
Date		: 28.02.2017

But			: TODO

Remarque(s) :	la variable annee n'est pas sign�e et est un long long, dans le cas 
				o� l'on devrait utiliser cette classe pour une date pr�c�dent J.C.

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
	
	Date(short jour, Mois mois, long long annee);
	void setJour(const unsigned short& jour);
	void setMois(const Mois& mois);
	void setAnnee(const long long& annee);
	void setDate(const short& jour, const Mois& mois, const long long& annee);
	short getJour() const;
	Mois getMois() const;
	long long getAnnee()  const;
	bool getValid() const;

	//TODO Operateurs de flux
private:
	unsigned short jour;
	Mois mois;
	long long annee;
	//TODO gestion de dateValide...
	bool dateValide = 1;
	const std::string MOIS[12] = { "janvier", "fevrier", "mars", "avril", "mais", "juin",
		"juillet", "aout", "septembre", "octobre", "novembre",
		"decembre" }; //oblig� de mettre la taille de l'array, sinon erreur lors de la
					  //d�claration de l'attribut naissance dans la classe Personne.h
};

#endif
