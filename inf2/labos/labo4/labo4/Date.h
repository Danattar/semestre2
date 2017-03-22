 /*
 -------------------------------------------------------------------------
 Laboratoire : Laboratoire 3
 Fichier     : Date.h
 Auteur(s)   : Kevin Do Vale & Thierry OTTO / INF2-1-C
 Date        : 08.03.2017

 But         : Classe mettant à disposition tous les outils pour gérer une date.

 Remarque(s) : -

 Compilateur : MinGW-g++ 4.8.1
 -------------------------------------------------------------------------
*/

#ifndef DATE_H
#define DATE_H
#include <iostream>

enum Mois {janvier = 1, fevrier, mars, avril , mai, juin, juillet,
                 aout, septembre, octobre, novembre, decembre};
const std::string MOIS[] = {"janvier", "fevrier", "mars", "avril", "mai", "juin",
                            "juillet", "aout", "septembre", "octobre", "novembre",
                            "decembre"};

class Date {
   
   // Surcharge des flux
   friend std::ostream& operator << (std::ostream& os, const Date& date);
   

public:
   
   // Constructeur
   Date(unsigned jour, Mois mois, unsigned annee);
   
   // Setteur
   void setJour(unsigned jour);
   void setMois(Mois mois);
   void setAnnee(unsigned annee);
   void setDate(unsigned jour, Mois mois, unsigned annee);
   
   // Sélecteur
   unsigned getJour() const;
   Mois getMois() const;
   unsigned getAnnee() const;
   
private:
   unsigned jour;
   Mois mois;
   unsigned annee;
};

#endif /* DATE_H */

