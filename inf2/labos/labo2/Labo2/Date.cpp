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
istream& operator >> (istream& is, const Date& date) 
{
	string resultat;
	cout << "saisir jour : ";
	cin >> date.setJour;
	cout << endl << "saisir mois: ";
	cin >> date.setMois;
	cout << endl << "saisir annee";
	cin >> date.setAnnee;
	return is;
}

Date::Date(short jour, Mois mois, long long annee)
	:jour(jour), mois(mois), annee(annee)
{}
void Date::setJour(unsigned short jour) {
	this->jour = jour;
}
void Date::setMois(Mois mois) {
	this->mois = mois;
}
void Date::setAnnee(long long annee) {
	this->annee = annee;
}
void Date::setDate(short jour, Mois mois, long long annee) {
	setJour(jour);
	setMois(mois);
	setAnnee(annee);
}
short Date::getJour() {
	return jour;
}
Mois Date::getMois() {
	return mois;
}
long long Date::getAnnee() {
	return annee;
}
bool Date::getValid() {
	return dateValide;
}

