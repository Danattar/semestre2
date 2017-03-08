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
std::istream& operator >> (std::istream&, Personne&);

class Personne {
	friend std::ostream& operator << (std::ostream&, const Personne&);
	friend std::istream& operator >> (std::istream&, Personne&);
public:
	Personne();
	Personne(const std::string&, const std::string&, const Date&,
			const Adresse&, const bool&, const std::string&,
			 const Adresse&, const unsigned int&);
	//TODO: parametres optionnels.
	//TODO: operateurs de flux.
	void setPrenom(const std::string&);
	void setNom(const std::string&);
	void setNaissance(const Date&);
	void setAdresse(const Adresse&);
	void setIsEmployee(const bool&);
	void setEmployeurNom(const std::string&);
	void setEmployeurAdresse(const Adresse&);
	void setSalaireAnnuel(const unsigned int&);
	std::string getPrenom() const;
	std::string getNom() const;
	Date getNaissance() const;
	Adresse getAdresse() const;
	bool getIsEmployee();
	std::string getEmployeurNom() const;
	Adresse getEmployeurAdresse() const;
	unsigned int getSalaireAnnuel() const;
private:
	std::string prenom;
	std::string nom;
	Date naissance;
	Adresse adresse;
	bool isEmployee;
	std::string employeurNom;
	Adresse employeurAdresse;
	unsigned int salaireAnnuel;
};

#endif