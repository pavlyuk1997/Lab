#include <iostream>
#include <math.h>
#include <conio.h>
#define p(k) (pow(log(a*k),2)+tan(a*k))/(a*k)

using namespace std;


int main()
{
	double F, a=0.11, x=2.13, y=0.17,z=0.23;
	F=((p(x)+p(y))/p(z))*cos(x);
	cout<<"F= "<<F;
	getch ();
}
