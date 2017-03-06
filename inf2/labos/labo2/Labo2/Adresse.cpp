#include "Adresse.h"
/*
-----------------------------------------------------------------------------------
Laboratoire	: 02 - Personnes
Fichier		: Adresse.cpp
Auteur(s)	: Frédéric Korradi et Adrien Barth
Date		: 28.02.2017

But			: TODO

Remarque(s) :	---

Compilateur : MinGW-g++ 4.8.1
-----------------------------------------------------------------------------------
*/
#include "Adresse.h"
using namespace std;

Adresse::Adresse(const std::string& rue, const std::string& no, 
	const std::string& npa, const std::string& ville, const std::string& pays)
	:rue(rue), no(no), npa(npa),ville(ville),pays(pays)
{
}


ostream& operator << (ostream& os, const Adresse& adresse) {
	os << adresse.rue << " " << adresse.no << ", " << adresse.npa << " " << adresse.ville << ", " << adresse.pays;
	return os;
}
void Adresse::setRue(const string& rue)
{
	this->rue = rue;
}

void Adresse::setNo(const string& no)
{
	this->no = no;
}

void Adresse::setNpa(const string& npa)
{
	this->npa = npa;
}

void Adresse::setVille(const string& ville)
{
	this->ville = ville;
}

void Adresse::setPays(const string& pays)
{
	this->pays = pays;
}

string Adresse::getRue() const
{
	return rue;
}

string Adresse::getNo() const
{
	return no;
}

string Adresse::getNpa() const
{
	return npa;
}

string Adresse::getVille() const
{
	return ville;
}

string Adresse::getPays() const
{
	return pays;
}


