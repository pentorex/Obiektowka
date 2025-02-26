#include <iostream>

using namespace std;

class Osoba {
public:
	string imie;
	string nazwisko;
	char plec;
	int wiek;

	void pobieranie_danych()
	{
		cout << "Dodawanie nowej osoby do bazy: "<<endl;
		cout << "Podaj imie: ";
		cin >> imie;
		cout << "Podaj nazwisko: ";
		cin >> nazwisko;
		cout << "Podaj plec(M/K): ";
		cin >> plec;
		cout << "Podaj wiek: ";
		cin >> wiek;
	}
	void wypisanie_danych()
	{
		cout << "Dodano osobe do bazy: " << imie << " " << nazwisko << " - " << plec << " - " << wiek << " lat.";
	}
};

int main()
{
	Osoba o1;
	o1.pobieranie_danych();
	o1.wypisanie_danych();
	return 0;
}