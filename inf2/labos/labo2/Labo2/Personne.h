/*
-----------------------------------------------------------------------------------
Laboratoire	: 02 - Personnes
Fichier		: Personne.h
Auteur(s)	: Frédéric Korradi et Adrien Barth
Date		: 28.02.2017

But			: TODO

Remarque(s) :	---

Compilateur : MinGW-g++ 4.8.1
-----------------------------------------------------------------------------------
*/
#ifndef PERSONNE_H
#define PERSONNE_H
#include <string>
#include "Date.h"
#include "Adresse.h"

class Personne;


std::ostream& operator << (std::ostream&, const Personne&);

class Personne {
	friend std::ostream& operator << (std::ostream&, const Personne&);
public:
	Personne(std::string nom, std::string prenom, Date naissance,std::string npa, std::string employeurNom, 
			 Adresse employeurAdresse, unsigned int salaireAnnuel);
	//TODO: parametres optionnels.
	//TODO: operateurs de flux.
	void setPrenom(std::string prenom);
	void setNom(std::string nom);
	void setNaissance(Date naissance);
	void setNpa(std::string npa);
	void setEmployeurNom(std::string employeurNom);
	void setEmployeurAdresse(Adresse employeurAdresse);
	void setSalaireAnnuel(unsigned int salaireAnnuel);
	std::string getPrenom();
	std::string getNom();
	Date getNaissance();
	std::string getNpa();
	std::string getEmployeurNom();
	Adresse getEmployeurAdresse();
	unsigned int getSalaireAnnuel();
private:
	std::string prenom;
	std::string nom;
	Date naissance;
	std::string npa;
	std::string employeurNom;
	Adresse employeurAdresse;
	unsigned int salaireAnnuel;
};

#endif