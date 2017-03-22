/*
Compl�ter la partie not�e < � compl�ter > du programme ci-dessous, de telle sorte que celuici
affiche, � l'ex�cution :
integers contient 3 elements : [1, 2, 3]
integers contient 0 element : []
strings contient 4 elements : [un, deux, trois, quatre]
strings contient 0 element : []
*/


#include <iostream>
#include <string>

using namespace std;


//< � compl�ter >
int main() {
	MaCollection<int, vector> integers;
	size_t nb_integers;
	integers.add(1);
	integers.add(2);
	integers.add(3);
	nb_integers = integers.size();
	cout << "integers contient " << nb_integers
		<< " element" << (nb_integers > 1 ? "s" : "") << " : ";
	afficher(integers);
	integers.clear();
	nb_integers = integers.size();
	cout << "integers contient " << nb_integers
		<< " element" << (nb_integers > 1 ? "s" : "") << " : ";
	afficher(integers);
	MaCollection<string, list> strings;
	size_t nb_strings;
	strings.add("un");
	strings.add("deux");
	strings.add("trois");
	strings.add("quatre");
	nb_strings = strings.size();
	cout << "strings contient " << nb_strings
		<< " element" << (nb_strings > 1 ? "s" : "") << " : ";
	afficher(strings);
	strings.clear();
	nb_strings = strings.size();
	cout << "strings contient " << nb_strings
		<< " element" << (nb_strings > 1 ? "s" : "") << " : ";
	afficher(strings);
	return EXIT_SUCCESS;
}