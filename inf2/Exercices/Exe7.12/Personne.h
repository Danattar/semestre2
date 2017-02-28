#pragma once
#ifndef PERSONNE_H
#define PERSONNE_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Personne {
private:
	enum class Hobbies { SPORT, MUSIQUE, CINEMA, LECTURE };
	string nom;
	string prenom;
	Adresse adresse;
	vector<Hobbies> hobbies;
	vector<Personne> friends;

public:
	void setAmi(string nom, string prenom, Adresse adresse, vector<Hobbies> hobbies,
		vector<Personne> friends);
	void setHobby(Hobbies hobby);
};

#endif PERSONNE_H