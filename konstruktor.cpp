#include <iostream>

using namespace std;

class Pojemnik
{
	private:
	int x,y,z;
	
	public:
	Pojemnik(int a=20, int b=20, int c=30)
	{
		if (a<=0 || b<=0 || c<=0)
		{
			cout<<"Podano zle dane!";
			cout<<"x: "<<x<<endl<<"y: "<<y<<endl<<"z: "<<z;
		}
		else 
		{
			x=a;
			y=b;
			z=c;
			cout<<"x: "<<x<<endl<<"y: "<<y<<endl<<"z: "<<z;
		}
	}
};

int main() {
	
	Pojemnik w1;
	return 0;
}
