/*
-------------------------------------------------------------------------
Laboratoire : Laboratoire 3
Fichier     : Date.cpp
Auteur(s)   : Kevin Do Vale & Thierry OTTO / INF2-1-C
Date        : 20.03.2017

But         : Classe mettant à disposition tous les outils pour gérer une date.

Remarque(s) : -

Compilateur : MinGW-g++ 4.8.1
-------------------------------------------------------------------------
 */

#include <string>
#include <iostream>
#include "Date.h"

using namespace std;

Date::Date(unsigned jour, Mois mois, unsigned annee) {
   this->jour = jour;
   this->mois = mois;
   this->annee = annee;
}

void Date::setJour(unsigned jour) {
   this->jour = jour;
}

void Date::setMois(Mois mois) {
   this->mois = mois;
}

void Date::setAnnee(unsigned annee) {
   this->annee = annee;
}

void Date::setDate(unsigned jour, Mois mois, unsigned annee) {
   this->jour = jour;
   this->mois = mois;
   this->annee = annee;
}

unsigned Date::getJour() const {
   return jour;
}

Mois Date::getMois() const {
   return mois;
}

unsigned Date::getAnnee() const {
   return annee;
}

ostream& operator<<(ostream& os, const Date& date) {
   return os << date.jour << '-' << MOIS[(int) date.mois - 1] << '-' << date.annee << endl;
}

bool operator<(const Date& lhs, const Date& rhs) {
   bool memeAnnee = lhs.annee == rhs.annee;

   //test l'année
   if (lhs.annee < rhs.annee) return true;

      //S'ils ont la même année, test le mois
   else if (memeAnnee && lhs.mois < rhs.mois) return true;

      //S'ils ont la même année et le même mois test le jour
   else if (memeAnnee && lhs.mois == rhs.mois && lhs.jour < rhs.jour) return true;

   //Si aucune de ces conditions n'est vrai retourne faux
   return false;
}

bool operator>(const Date& lhs, const Date& rhs) {
   return rhs < lhs;
}

bool operator<=(const Date& lhs, const Date& rhs) {
   return !(lhs > rhs);
}

bool operator>=(const Date& lhs, const Date& rhs) {
   return !(lhs < rhs);
}

bool operator==(const Date& lhs, const Date& rhs) {
   //Compare l'annee le jour et le mois
   return lhs.annee == rhs.annee && lhs.jour == rhs.jour && lhs.mois == rhs.mois;
}

bool operator!=(const Date& lhs, const Date& rhs) {
   return !(lhs == rhs);
}