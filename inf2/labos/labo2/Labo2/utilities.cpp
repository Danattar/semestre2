/*
-----------------------------------------------------------------------------------
Laboratoire	: 02 - Personnes
Fichier		: utilities.h
Auteur(s)	: Frédéric Korradi et Adrien Barth
Date		: 28.02.2017

But			: Fonctions permettant d'effectuer des saisies utilisateurs.

Remarque(s) :	---

Compilateur : MinGW-g++ 4.8.1
-----------------------------------------------------------------------------------
*/

#ifndef UTILITIES_CPP
#define UTILITIES_CPP

#include <iostream>
#include <string>

using namespace std;

int lireInt(int min, int max, const string message, const string erreur) {

	if (min > max) {
		int tmp = min;
		min = max;
		max = tmp;
	}

	int nombre;

	while (true) {
		cout << message;
		cin >> nombre;
		
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin.sync();

		if (nombre < min || max < nombre) {
			cout << erreur << endl;
		}
		else {
			return nombre;
		}
	}
}

string lireString(const string message) {
	string saisie;
	
	do {
		cout << message;
		getline(cin, saisie);
	} while (saisie.empty());

	return saisie;
}

#endif // !UTILITIES_CPP