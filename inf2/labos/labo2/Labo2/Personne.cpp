/*
-----------------------------------------------------------------------------------
Laboratoire	: 02 - Personnes
Fichier		: Personne.cpp
Auteur(s)	: Frédéric Korradi et Adrien Barth
Date		: 28.02.2017

But			: TODO

Remarque(s) :	---

Compilateur : MinGW-g++ 4.8.1
-----------------------------------------------------------------------------------
*/
#include "Personne.h"
#include <iostream>
using namespace std;

Personne::Personne()
{
}

Personne::Personne(const string& nom, const string& prenom, const Date& naissance, 
	const Adresse& adresse,const bool& isEmployee, const string& employeurNom,
	const Adresse& employeurAdresse, const unsigned int& salaireAnnuel)
	:nom(nom), prenom(prenom), naissance(naissance),adresse(adresse),isEmployee(isEmployee), 
	employeurNom(employeurNom),	employeurAdresse(employeurAdresse), salaireAnnuel(salaireAnnuel)
{
}

ostream& operator << (ostream& os, const Personne& p) 
{
	os << p.nom << " " << p.prenom << " " << p.naissance << " " << p.employeurNom
	   << " " << p.employeurAdresse << " " << " " << p.salaireAnnuel;
	return os;
}

istream& operator >> (istream& is, Personne& p)
{
	cout << "Nom : ";
	is >> p.nom;
	cout << "Prenom : ";
	is >> p.prenom;
	bool adresse;
	do {
		cout << "Desirez-vous saisir votre adresse ? [0 - non, 1 - oui]: ";
		is >> adresse;
	} while (adresse <0 || adresse > 1);
	if (adresse) {
		is >> p.adresse;
	}
	cout << "Date de naissance [optionnel]" << endl;
	is >> p.naissance;
	cout << "La personne a-t-elle un employeur? [0 - non, 1 - oui]: ";
	is >> p.isEmployee;
	if (p.isEmployee) {
		cout << "Nom de l'employeur : ";
		is >> p.employeurNom;
		cout << "Adresse de l'employeur : ";
		is >> p.employeurAdresse;
		cout << "Salaire annuel : ";
		is >> p.salaireAnnuel;
	}
	
	return is;
}

void Personne::setPrenom(const string&prenom)
{
	this->prenom = prenom;
}

void Personne::setNom(const string&nom)
{
	this->nom = nom;
}

void Personne::setNaissance(const Date& naissance)
{
	//this->naissance = (naissance.getJour(), naissance.getMois(), naissance.getAnnee());
	//this->naissance = naissance;
}

void Personne::setAdresse(const Adresse& adresse)
{
	this->adresse = adresse;
}

void Personne::setIsEmployee(const bool& isEmployee)
{
	this->isEmployee = isEmployee;
}

void Personne::setEmployeurNom(const string&employeurNom)
{
	this->employeurNom = employeurNom;
}

void Personne::setEmployeurAdresse(const Adresse& employeurAdresse)
{
	this->employeurAdresse = employeurAdresse;
}

void Personne::setSalaireAnnuel(const unsigned int& salaireAnnuel)
{
	this->salaireAnnuel = salaireAnnuel;
}

string Personne::getPrenom() const
{
	return prenom;
}

string Personne::getNom() const
{
	return nom;
}

Date Personne::getNaissance() const
{
	return naissance;
}

Adresse Personne::getAdresse() const
{
	return adresse;
}

bool Personne::getIsEmployee()
{
	return isEmployee;
}

string Personne::getEmployeurNom() const
{
	return employeurNom;
}

Adresse Personne::getEmployeurAdresse() const
{
	return employeurAdresse;
}

unsigned int Personne::getSalaireAnnuel() const
{
	return salaireAnnuel;
}

