#include <string>
#include <iostream>
using namespace std;

#include "colectie.cpp"

int main()
{
	string nume;
	Colectie<string> numeAngajati;
	numeAngajati.Adauga("Dana");
	numeAngajati.Adauga("Marius");

	cout << "Lista numelor " << endl;
	while(numeAngajati.Elimina(&nume) )
	{
		cout << nume << endl;
	}

	Colectie<> numere;
	int numar;
	numere.Adauga(1);
	numere.Adauga(2);

	cout << "Lista numere" << endl;
	while(numere.Elimina(&numar) )
	{
		cout << numar << endl;

	}
	getchar();
	return 0;

}
