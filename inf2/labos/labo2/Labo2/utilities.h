/*
-----------------------------------------------------------------------------------
Laboratoire	: 02 - Personnes
Fichier		: utilities.h
Auteur(s)	: Frédéric Korradi et Adrien Barth
Date		: 28.02.2017

But			: Fichier de définitions pour utilities.cpp

Remarque(s) :	---

Compilateur : MinGW-g++ 4.8.1
-----------------------------------------------------------------------------------
*/

#ifndef UTILITIES_H
#define UTILITIES_H

#include <string>

int lireInt(int, int, const std::string, const std::string);
std::string lireString(const std::string);

#endif