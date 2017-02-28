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
using namespace std;

Adresse::Adresse(string rue, string no, string npa, string ville, string pays)
	:rue(rue), no(no), npa(npa),ville(ville),pays(pays)
{
}

void Adresse::setRue(string rue)
{
	this->rue = rue;
}

void Adresse::setNo(string no)
{
	this->no = no;
}

void Adresse::setNpa(string npa)
{
	this->npa = npa;
}

void Adresse::setVille(string ville)
{
	this->ville = ville;
}

void Adresse::setPays(string pays)
{
	this->pays = pays;
}

string Adresse::getRue()
{
	return rue;
}

string Adresse::getNo()
{
	return no;
}

string Adresse::getNpa()
{
	return npa;
}

string Adresse::getVille()
{
	return ville;
}

string Adresse::getPays()
{
	return pays;
}
