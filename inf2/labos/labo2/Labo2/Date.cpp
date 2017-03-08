/*
-----------------------------------------------------------------------------------
Laboratoire	: 02 - Personnes
Fichier		: Date.cpp
Auteur(s)	: Frédéric Korradi et Adrien Barth
Date		: 28.02.2017

But			: Classe représentant une adresse et permettant d'y accéder et de la
			  manipuler.

Remarque(s) : La date utilise un type fortement énuméré pour la saisie du mois.

Compilateur : MinGW-g++ 4.8.1
-----------------------------------------------------------------------------------
*/

#include "Date.h"
#include "utilities.h"
#include <iostream>

using namespace std;

Date::Date()
	:jour(1), mois(Mois::JANVIER), annee(1900) {
}

ostream& operator << (ostream& os, const Date& date) {	
	os << date.jour << "-" << date.MOIS[(int)date.mois]<< "-" << date.annee;

	return os;
}
istream& operator >> (istream& is, Mois& mois) {
	const string ERREUR = "Saisie invalide, recommencez...";
	mois = Mois(lireInt(1, 12, "Mois [1-12]: ", ERREUR));

	return is;
}

istream& operator >> (istream& is, Date& date)  {
	const string ERREUR = "Saisie invalide, recommencez...";

	date.jour = lireInt(1, 31, "Jour: ", ERREUR);
	is >> date.mois;
	date.annee = lireInt(1900, 10000, "Annee: ", ERREUR);

	return is;
}

Date::Date(unsigned short jour, Mois mois, unsigned annee)
	:jour(jour), mois(mois), annee(annee) {
}

void Date::setJour(const unsigned short& jour) {
	this->jour = jour;
}

void Date::setMois(const Mois& mois) {
	this->mois = mois;
}

void Date::setAnnee(const unsigned& annee) {
	this->annee = annee;
}

void Date::setDate(const unsigned short& jour, const Mois& mois, const unsigned& annee) {
	setJour(jour);
	setMois(mois);
	setAnnee(annee);
}

short Date::getJour() const {
	return jour;
}

Mois Date::getMois() const {
	return mois;
}

long long Date::getAnnee() const {
	return annee;
}

bool Date::getValid() const {
	return dateValide;
}