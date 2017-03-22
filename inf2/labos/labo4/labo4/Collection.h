/*
-------------------------------------------------------------------------
Laboratoire : Laboratoire 4
Fichier     : Collection.h
Auteur(s)   : Frédéric Korradi & Thierry OTTO / INF2-1-C
Date        : 29.03.2017

But         : Classe mettant à disposition tous les outils pour gérer
              une collection d'objets génériques

Remarque(s) : -

Compilateur : MinGW-g++ 4.8.1
-------------------------------------------------------------------------
 */

#ifndef COLLECTION_H
#define COLLECTION_H

template <typename T, template <typename, typename = std::allocator<T>> class Container>
class Collection {
   
   friend std::ostream& operator<<(std::ostream& os, const Collection& obj);

   //Surcharge des opérateurs
public:
   //Constructeur
   Collection();
   
   // Modificateur
   bool ajouterElement(T element);
   bool supprimerElement(T element);
   void vider();
   void nombreElements();
   size_t compterElement(T element);
   void trierCroissant(T element);

private:
   Container<T> elements;
};

#endif COLLECTION_H
