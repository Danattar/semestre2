/*
-------------------------------------------------------------------------
Laboratoire : Laboratoire 4
Fichier     : Collection.cpp
Auteur(s)   : Frédéric Korradi & Thierry OTTO / INF2-1-C
Date        : 29.03.2017

But         : Classe mettant à disposition tous les outils pour gérer
              une collection d'objets génériques

Remarque(s) : -

Compilateur : MinGW-g++ 4.8.1
-------------------------------------------------------------------------
 */

#include <iostream>
#include "Collection.h"


using namespace std;

Collection::Collection() {
}

   bool ajouterElement(T element);
   bool supprimerElement(T element);
   void vider();
   void nombreElements();
   size_t compterElement(T element);
   void trierCroissant(T element);

std::ostream & operator<<(std::ostream & os, const Collection & obj) {
   return os << '(' << obj.x << ", " << obj.y << ')' << endl;
}
