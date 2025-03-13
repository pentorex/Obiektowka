#include <iostream>

using namespace std;

class zespolona {
private:
    int re;
    int im;
public:
    zespolona(void)
    {
        re = 0;
        im = 0;
    }
    zespolona(int _re, int _im) : re(_re), im(_im) {}
    ~zespolona(void)
    {
        cout << "Uruchomiono destruktor" << endl;
    }
    void set(int _re, int _im) {
        re = _re;
        im = _im;
    }
    void set_re(int _re)
    { 
        re = _re; 
    }
    void set_im(int _im)
    { 
        im = _im; 
    }
    int get_re(void)
    { 
        return re; 
    }
    int get_im(void) 
    { 
        return im; 
    }
};

class mat {
public:
    mat(void) {}
    ~mat(void) {}

    void suma(zespolona* a, zespolona* b) {
        a->set_re(a->get_re() + b->get_re());
        a->set_im(a->get_im() + b->get_im());
    }
    void roznica(zespolona* a, zespolona* b) {
        a->set_re(a->get_re() - b->get_re());
        a->set_im(a->get_im() - b->get_im());
    }
    void wypisz(zespolona* a) {
        cout << a->get_re() << "+" << a->get_im() << "i";
    }
};

int main(int argc, char** argv) {
    zespolona liczba1(2, 4);
    cout << "liczba 1: " << liczba1.get_re() << "+" << liczba1.get_im() << "i" << endl;

    zespolona liczba2;
    liczba2.set(3, 5);
    cout << "liczba 2: " << liczba2.get_re() << "+" << liczba2.get_im() << "i" << endl;

    mat operacja;
    operacja.suma(&liczba1, &liczba2);
    cout << "suma liczb: " << liczba1.get_re() << "+" << liczba1.get_im() << "i" << endl << endl;

    zespolona* liczba3 = new zespolona(1, 1);
    cout << "liczba 3: " << liczba3->get_re() << "+" << liczba3->get_im() << "i" << endl;

    zespolona* liczba4 = new zespolona;
    liczba4->set(5, 4);
    cout << "liczba 4: " << liczba4->get_re() << "+" << liczba4->get_im() << "i" << endl;

    operacja.roznica(liczba3, liczba4);
    cout << "roznica liczb: ";
    operacja.wypisz(liczba3);
    cout << endl << endl;

    delete liczba3;
    delete liczba4;
    return 0;
}
