/*
-----------------------------------------------------------------------------------
Laboratoire	: 02 - Personnes
Fichier		: Adresse.h
Auteur(s)	: Frédéric Korradi et Adrien Barth
Date		: 28.02.2017

But			: Fichier de définition pour Adresse.cpp

Remarque(s) :	---

Compilateur : MinGW-g++ 4.8.1
-----------------------------------------------------------------------------------
*/

#ifndef ADRESSE_H
#define ADRESSE_H

#include <string>

class Adresse;

std::ostream& operator << (std::ostream&, const Adresse&);
std::istream& operator >> (std::istream&, Adresse&);

class Adresse {
	friend std::ostream& operator << (std::ostream&, const Adresse&);
	friend std::istream& operator >> (std::istream&, Adresse&);

public:
	Adresse();
	Adresse( const std::string&,  const std::string&,  const std::string&,  const std::string&,  const std::string&);
	void setRue( const std::string&);
	void setNo( const std::string&);
	void setNpa(const std::string&);
	void setVille(const std::string&);
	void setPays(const std::string&);
	std::string getRue() const;
	std::string getNo() const;
	std::string getNpa() const;
	std::string getVille() const;
	std::string getPays() const;

private:
	std::string rue = "";
	std::string no = "";
	std::string npa;
	std::string ville;
	std::string pays;
};

#endif