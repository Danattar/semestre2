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

Personne::Personne(string nom, string prenom, Date naissance, string employeurNom,
	Adresse employeurAdresse, unsigned int salaireAnnuel)
	:nom(nom), prenom(prenom), naissance(naissance), employeurNom(employeurNom),
	employeurAdresse(employeurAdresse), salaireAnnuel(salaireAnnuel)
{
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
	this->naissance = naissance;
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
