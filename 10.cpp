#include <iostream>
#include <conio.h>
#include <math.h>
#define a 0.11
#define c 1.1
#define m 3
#define n 10

using namespace std;
int fx (double b [m][n], int i)
{
	int j;
	double sym=0;
	for (j=0; j<n;j++)
	{
	sym+=sin(b[i][j]+c);
	}
	sym=sym*a+c;
	return (sym);
}
void vvid (double b[m][n])
{
	int i,j;
	for(i=0; i<m;i++)
	for(j=0; j<n;j++)
	{
		cout<<"b["<<i+1<<"]["<<j+1<<"]= ";
		cin >> b[i][j];
	}
}
int main ()
{
	double f=0, b[m][n], dob=1, sym=0;
	int i,j;
	vvid (b);
	for(i=0;i<m;i++)
	{
		dob*=fx(b,i);
		sym+=fx(b,i);
	}
	f= dob+(a*sym);
	cout<<"f="<<f;
	return 0;
}
