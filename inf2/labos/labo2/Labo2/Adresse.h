/*
-----------------------------------------------------------------------------------
Laboratoire	: 02 - Personnes
Fichier		: Adresse.h
Auteur(s)	: Frédéric Korradi et Adrien Barth
Date		: 28.02.2017

But			: TODO

Remarque(s) :	---

Compilateur : MinGW-g++ 4.8.1
-----------------------------------------------------------------------------------
*/
#ifndef ADRESSE_H
#define ADRESSE_H
#include <string>


class Adresse {
public:
	Adresse(std::string rue, std::string no, std::string npa, std::string ville, std::string pays); //TODO: propriétés optionnelles
	void setRue(std::string rue);
	void setNo(std::string no);
	void setNpa(std::string npa);
	void setVille(std::string ville);
	void setPays(std::string pays);
	std::string getRue();
	std::string getNo();
	std::string getNpa();
	std::string getVille();
	std::string getPays();


private:
	std::string rue;
	std::string no;
	std::string npa;
	std::string ville;
	std::string pays;
	//TODO : operateurs de flux.

};

#endif