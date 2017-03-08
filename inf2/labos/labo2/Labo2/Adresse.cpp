/*
-----------------------------------------------------------------------------------
Laboratoire	: 02 - Personnes
Fichier		: Adresse.cpp
Auteur(s)	: Frédéric Korradi et Adrien Barth
Date		: 28.02.2017

But			: Classe représentant une adresse et permettant d'y accéder et de la
manipuler

Remarque(s) : - Les atributs rue et numéro sont optionnels
- Les attributs npa, ville et pays sont obligatoires.

Compilateur : MinGW-g++ 4.8.1
-----------------------------------------------------------------------------------
*/

#include "Adresse.h"
#include "utilities.h"
#include <iostream>

using namespace std;

Adresse::Adresse() {
}

Adresse::Adresse(const std::string& npa, const std::string& ville,
	const std::string& pays, const std::string& rue = "", const std::string& no = "")
	:rue(rue), no(no), npa(npa),ville(ville),pays(pays) {
}


ostream& operator << (ostream& os, const Adresse& adresse) {

	if (!adresse.rue.empty()) {
		os << adresse.rue << " " << adresse.no << endl;
	}

	os << adresse.npa << " " << adresse.ville << endl
		<< adresse.pays << endl;

	return os;
}

istream& operator >> (istream& is, Adresse& a) {
	cout << "Rue [optionnel] : ";
	getline(is, a.rue);

	if (!a.rue.empty()) {
		cout << "Numero [optionnel] : ";
		getline(is, a.no);
	}

	a.npa = lireString("NPA: ");
	a.ville = lireString("Ville: ");
	a.pays = lireString("Pays: ");

	return is;
}

void Adresse::setRue(const string& rue) {
	this->rue = rue;
}

void Adresse::setNo(const string& no) {
	this->no = no;
}

void Adresse::setNpa(const string& npa) {
	this->npa = npa;
}

void Adresse::setVille(const string& ville) {
	this->ville = ville;
}

void Adresse::setPays(const string& pays) {
	this->pays = pays;
}

string Adresse::getRue() const {
	return rue;
}

string Adresse::getNo() const {
	return no;
}

string Adresse::getNpa() const {
	return npa;
}

string Adresse::getVille() const {
	return ville;
}

string Adresse::getPays() const {
	return pays;
}