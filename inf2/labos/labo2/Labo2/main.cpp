/*
-----------------------------------------------------------------------------------
Laboratoire	: 02 - Personnes
Fichier		: main.cpp
Auteur(s)	: Frédéric Korradi et Adrien Barth
Date		: 28.02.2017

But			: Programme principal qui permet de tester les classes Personne, Adresse
			  et Date du laboratoire 2. La création de personne via des données
			  ainsi que celle via une saisie utilisateur est testée. Ce programme
			  va également afficher toutes les informations des personnes saisies,
			  les noms et prénoms des personnes possédant un emploi et celles
			  dont l'attribut npa de l'adresse de la personne correspondant à une
			  valeur saisie par l'utilisateur.

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

	Date d1, d2;
	d1 = d2;
	vP personnes;
	Date naissance((short)22, (Mois) 2, (long long) 2000);
	Adresse employeurAdresse(
		"6666", "Hante-Ville", "Danemark",
		"Route de Cheseaux", "18b");
	Personne personne(
		"Marcel-Jean", "Jean", naissance, employeurAdresse, true,
		"Borris Leutard", employeurAdresse, 10000000);
	personnes.push_back(personne);

	Date naissance2((short)23, (Mois)4, (long long)1905);
	Adresse employeurAdresse2(
		"18950", "Amsterdam", "Pays-Bas",
		"Place de la Gare", "1");
	Personne personne2("Marcel-Jean", "Marie", naissance,
		employeurAdresse, true, "Borris Leutard", employeurAdresse, 250);
	personnes.push_back(personne2);
	
	Personne personne3;
	cin >> personne3;
	personnes.push_back(personne3);

	for (Personne p : personnes) {
		cout << p << endl;
	}

	for (Personne p : personnes) {
		if (p.getIsEmployee()) {
			cout << p.getNom() << " " << p.getPrenom() << endl;
		}
	}

	cout << endl << "Saissiez un NPA a rechercher : ";
	string npaSearched;
	getline(cin, npaSearched);
	cout << "Personnes habitant au NPA : " << npaSearched << endl;
	cout << "-------------------------" << endl;

	for (Personne p : personnes) {
		if (!((p.getAdresse().getNpa()).compare(npaSearched))) {
			cout << "- " << p << endl;
		}
	}
	cout << "-------------------------" << endl << endl;

	cout << "Appuyez sur une touche pour continuer...";
	cin.get();
	return EXIT_SUCCESS;
}