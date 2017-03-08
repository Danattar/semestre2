/*
-----------------------------------------------------------------------------------
Laboratoire	: 02 - Personnes
Fichier		: Date.cpp
Auteur(s)	: Frédéric Korradi et Adrien Barth
Date		: 28.02.2017

But			: TODO

Remarque(s) :	---

Compilateur : MinGW-g++ 4.8.1
-----------------------------------------------------------------------------------
*/
#include "Date.h"
#include <iostream>

using namespace std;

Date::Date()
	:jour(1), mois(Mois::JANVIER), annee(1900)
{}

ostream& operator << (ostream& os, const Date& date)
{
	
	os << date.jour << "-" << date.MOIS[(int)date.mois]<< "-" << date.annee;
	return os;
}
istream& operator >> (istream& is, Mois& mois)
{
	int temp = -1;
	while (temp <= 0 || temp >= 12) {
		is >> temp;
	}
	temp--;
	mois = Mois(temp);
	return is;
}
istream& operator >> (istream& is, Date& date) 
{
	string resultat;
	cout << "Jour : ";
	is >> date.jour;
	cout << "Mois [1-12] : ";
	is >> date.mois;
	cout << "Annee : ";
	is >> date.annee;
	return is;
}

Date::Date(short jour, Mois mois, long long annee)
	:jour(jour), mois(mois), annee(annee)
{}
void Date::setJour(const unsigned short& jour) {
	this->jour = jour;
}
void Date::setMois(const Mois& mois) {
	this->mois = mois;
}
void Date::setAnnee(const long long& annee) {
	this->annee = annee;
}
void Date::setDate(const short& jour, const Mois& mois, const long long& annee) {
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

