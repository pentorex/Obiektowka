#include <iostream>

using namespace std;

class kalkulator {
    int liczba1;
    int liczba2;
public: 
    kalkulator()
    {
    liczba1 = 0;
    liczba2 = 0;
    };
    ~kalkulator()
    {
        cout << "\nUruchomiono destruktor";
    }
    int dodawanie()
    {
        return liczba1 + liczba2;
    };
    int odejmowanie()
    {
        return liczba1 - liczba2;
    };
    int mnozenie()
    {
        return liczba1 * liczba2;
    };
    void klawiatura()
    {
        cout << "Podaj liczbe nr. 1: ";
        cin >> liczba1;
        cout << "Podaj liczbe nr. 2: ";
        cin >> liczba2;
    };
};
int main()
{
    kalkulator test;
    test.klawiatura();
    cout<<"\nWynik dodawania to: "<<test.dodawanie();
    cout << "\nWynik odejmowania to: " <<test.odejmowanie();
    cout << "\nWynik mnozenia to: " << test.mnozenie();
    return 0;
}
