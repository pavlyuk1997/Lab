#include <iostream>
#include <math.h>
#include <conio.h>
#define a 0.11
#define x 2.13
#define y 0.17
#define z 0.23

using namespace std;

double p (double k)
	{
		return (pow(log(a*k),2)+tan(a*k))/(a*k);
	}
int main()
{
	double T;
	T=((p(x)+p(y))/p(z))*cos(x);
	cout<<"T= "<<T;
	getch ();
}
