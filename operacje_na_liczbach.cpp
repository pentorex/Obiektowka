#include <iostream>

using namespace std;

class algorytmy {
    int liczba1;
    int liczba2;
    int liczba3;
    int liczba4;
public:
    algorytmy()
    {
        liczba1 = 0;
        liczba2 = 0;
        liczba3 = 0;
        liczba4 = 0;
    };
    ~algorytmy()
    {
        cout << "\nUruchomiono destruktor";
    }
    int max()
    {
        int maximum=liczba1;
        if (liczba2 > maximum)
        {
            maximum = liczba2;
        }
        if (liczba3 > maximum)
        {
            maximum = liczba3;
        }
        if (liczba4 > maximum)
        {
            maximum = liczba4;
        }
        return maximum;
    }
    int mini()
    {
        int minimum = liczba1;
        if (liczba2 < minimum)
        {
            minimum = liczba2;
        }
        if (liczba3 < minimum)
        {
            minimum = liczba3;
        }
        if (liczba4 < minimum)
        {
            minimum = liczba4;
        }
        return minimum;
    }
    int suma()
    {
        int suma = liczba1 + liczba2 + liczba3 + liczba4;
        return suma;
    }
    int szukana()
    {
        int szukana;
        cout << "\nPodaj liczbe do znalezienia: ";
        cin >> szukana;
        if ((szukana == liczba1) || (szukana == liczba2) || (szukana == liczba3) || (szukana == liczba4))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int parzyste()
    {
        if ((liczba1%2==0)||(liczba2 % 2 == 0)||(liczba3 % 2 == 0)||(liczba4 % 2 == 0))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void klawiatura()
    {
        cout << "Podaj liczbe nr. 1: ";
        cin >> liczba1;
        cout << "Podaj liczbe nr. 2: ";
        cin >> liczba2;
        cout << "Podaj liczbe nr. 3: ";
        cin >> liczba3;
        cout << "Podaj liczbe nr. 4: ";
        cin >> liczba4;
    };
};
int main()
{
    algorytmy liczby;
    liczby.klawiatura();
    cout <<"Liczba najwieksza: "<< liczby.max() << "\nLiczba najmniejsza: " << liczby.mini();
    cout << "\nSuma liczb: " << liczby.suma();
    if (liczby.szukana())
    {
        cout << "Liczba ta wystepuje wsrod tych liczb.";
    }
    else
    {
        cout << "Liczba ta nie wystepuje tutaj.";
    }
    if (liczby.parzyste())
    {
        cout << "\nWsrod tych liczb jest conajmniej jedna liczba parzysta.";
    }
    else
    {
        cout << "\nWsrod tych liczb nie ma ani jednej liczby parzystej.";
    }
    return 0;
}
