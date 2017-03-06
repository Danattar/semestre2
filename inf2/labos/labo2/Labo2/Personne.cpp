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
using namespace std;

Personne::Personne(string nom, string prenom, Date naissance, string npa, string employeurNom,
	Adresse employeurAdresse, unsigned int salaireAnnuel)
	:nom(nom), prenom(prenom), naissance(naissance),npa(npa), employeurNom(employeurNom),
	employeurAdresse(employeurAdresse), salaireAnnuel(salaireAnnuel)
{
}

ostream& operator << (ostream& os, const Personne& p) 
{
	os << p.nom << " " << p.prenom << " " << p.naissance << " " << p.employeurNom
	   << " " << p.employeurAdresse << " " << " " << p.salaireAnnuel;
	return os;
}

void Personne::setPrenom(string prenom)
{
	this->prenom = prenom;
}

void Personne::setNom(string nom)
{
	this->nom = nom;
}

void Personne::setNaissance(Date naissance)
{
	//this->naissance = ((naissance.getJour), naissance.getMois, naissance.getAnnee);
}

void Personne::setNpa(string npa)
{
	this->npa = npa;
}

void Personne::setEmployeurNom(string employeurNom)
{
	this->employeurNom = employeurNom;
}

void Personne::setEmployeurAdresse(Adresse employeurAdresse)
{
	this->employeurAdresse = employeurAdresse;
}

void Personne::setSalaireAnnuel(unsigned int salaireAnnuel)
{
	this->salaireAnnuel = salaireAnnuel;
}

string Personne::getPrenom()
{
	return prenom;
}

string Personne::getNom()
{
	return nom;
}

Date Personne::getNaissance()
{
	return naissance;
}

string Personne::getNpa()
{
	return npa;
}

string Personne::getEmployeurNom()
{
	return employeurNom;
}

Adresse Personne::getEmployeurAdresse()
{
	return employeurAdresse;
}

unsigned int Personne::getSalaireAnnuel()
{
	return salaireAnnuel;
}

