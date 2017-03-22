/*
-----------------------------------------------------------------------------------
Laboratoire	: 02 - Personnes
Fichier		: Personne.cpp
Auteur(s)	: Frédéric Korradi et Adrien Barth
Date		: 28.02.2017

But			: Classe représentant une adresse et permettant d'y accéder et de la
			  manipuler.

Remarque(s) : - Les attributs nom, prenom, naissance sont obligatoires.
			  - Les attirubts naissance, adresse et les informations sur l'employeur
			  sont optionnels.

Compilateur : MinGW-g++ 4.8.1
-----------------------------------------------------------------------------------
*/

#include "Personne.h"
#include "utilities.h"
#include <iostream>

using namespace std;

Personne::Personne() {
}

Personne::Personne(const string& nom, const string& prenom, const Date& naissance, 
	const Adresse& adresse,const bool& isEmployee, const string& employeurNom,
	const Adresse& employeurAdresse, const unsigned int& salaireAnnuel)
	:nom(nom), prenom(prenom), naissance(naissance),adresse(adresse),isEmployee(isEmployee), 
	employeurNom(employeurNom),	employeurAdresse(employeurAdresse), salaireAnnuel(salaireAnnuel) {
}

ostream& operator << (ostream& os, const Personne& p) {
	os << p.prenom << " " << p.nom << endl
		<< "Ne le: " << p.naissance << endl
		<< "Adresse:" << endl << p.adresse << endl;

	if (p.isEmployee) {
		os << "Employeur:" << endl
			<< p.employeurNom << endl
			<< p.employeurAdresse << endl
			<< "Salaire annuel: " << p.salaireAnnuel;
	}

	return os;
}

istream& operator >> (istream& is, Personne& p) {
	const string ERREUR = "Saisie invalide, recommencez...";

	p.nom = lireString("Votre nom: ");
	p.prenom = lireString("Votre prenom: ");

	if (lireInt(0, 1,
		"Voulez-vous saisir une adresse ([0] Non, [1] Oui) ? ",
		ERREUR)) {
		is >> p.adresse;
	}

	if (lireInt(0, 1,
		"Voulez-vous saisir votre date de naissance ([0] Non, [1] Oui) ? ",
		ERREUR)) {
		is >> p.naissance;
	}

	if (lireInt(0, 1,
		"Avez-vous un employeur ([0] Non, [1] Oui) ? ",
		ERREUR)) {
		p.isEmployee = true;

		p.employeurNom = lireString("Nom de l'employeur: ");

		cout << "Adresse de l'employeur : " << endl;
		is >> p.employeurAdresse;

		cout << "Salaire annuel : ";
		p.salaireAnnuel = lireInt(0, 1e+9,
			"Quelle est votre salaire annuel ?",
			ERREUR);
	}
	else {
		p.isEmployee = false;
	}
	
	return is;
}

void Personne::setPrenom(const string& prenom) {
	this->prenom = prenom;
}

void Personne::setNom(const string& nom) {
	this->nom = nom;
}

void Personne::setNaissance(const Date& naissance) {
	this->naissance.setJour(naissance.getJour());
	this->naissance.setAnnee(naissance.getAnnee());
	this->naissance.setMois(naissance.getMois());
	//this->naissance = naissance;
}

void Personne::setAdresse(const Adresse& adresse) {
	this->adresse = adresse;
}

void Personne::setIsEmployee(const bool& isEmployee) {
	this->isEmployee = isEmployee;
}

void Personne::setEmployeurNom(const string&employeurNom) {
	this->employeurNom = employeurNom;
}

void Personne::setEmployeurAdresse(const Adresse& employeurAdresse) {
	this->employeurAdresse = employeurAdresse;
}

void Personne::setSalaireAnnuel(const unsigned int& salaireAnnuel) {
	this->salaireAnnuel = salaireAnnuel;
}

string Personne::getPrenom() const {
	return prenom;
}

string Personne::getNom() const {
	return nom;
}

Date Personne::getNaissance() const {
	return naissance;
}

Adresse Personne::getAdresse() const {
	return adresse;
}

bool Personne::getIsEmployee() {
	return isEmployee;
}

string Personne::getEmployeurNom() const {
	return employeurNom;
}

Adresse Personne::getEmployeurAdresse() const {
	return employeurAdresse;
}

unsigned int Personne::getSalaireAnnuel() const {
	return salaireAnnuel;
}