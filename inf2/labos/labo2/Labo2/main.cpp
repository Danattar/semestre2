/*
-----------------------------------------------------------------------------------
Laboratoire	: 02 - Personnes
Fichier		: main.cpp
Auteur(s)	: Frédéric Korradi et Adrien Barth
Date		: 28.02.2017

But			: TODO

Remarque(s) :	---

Compilateur : MinGW-g++ 4.8.1
-----------------------------------------------------------------------------------
*/
#include <iostream>
#include <string>
#include <vector>
#include "Adresse.h"
#include "Date.h"
#include "Personne.h"

using namespace std;
using vP = vector<Personne>;
int main() {
	vP personnes;
	Date naissance((short)22, (Mois) 2, (long long) 2000);
	Adresse employeurAdresse((string)"maison hantee", (string)"13", (string)"6666", (string)"HanteVille", (string)"Suisse");
	Personne personne((string)"Marcel-Jean", (string)"Jean", naissance,(string)"9999", (string)"Borris Leutard", employeurAdresse, (unsigned int)10000000);
	personnes.push_back(personne);

	Date naissance2((short)23, (Mois)4, (long long)1905);
	Adresse employeurAdresse2((string)"maison hantee2", (string)"123", (string)"66266", (string)"HanteVille2", (string)"Suisse2");
	Personne personne2((string)"Marcel2-Jean", (string)"Jean2", naissance, (string)"99992", (string)"2Borris Leutard", employeurAdresse, (unsigned int)250);
	personnes.push_back(personne2);
	
	for each (Personne p in personnes) {
		cout << p << endl;
	}
	for each(Personne p in personnes) {
		/*if (p.getEmployeurNom) {
			cout << p << endl;
		}*/
	}
	cout << "Saissiez un NPA a rechercher : ";
	string npaSearched;
	cin >> npaSearched;
	for each(Personne p in personnes) {
		if ((p.getNpa).compare(npaSearched)) {
			cout << p << endl;
		}
	}
	cout << "Please press enter to end program...";
	cin.get();
	return EXIT_SUCCESS;
}


// pour les propriétés optionnelles, setter a null. L'adresse, créer un objet avec des string vides, la date, constructeur par défault (1.1.1900). 
// A l'affichage, ne pas afficher les valeurs null, l'adresse avec string vides et les dates avec valeur par défault.