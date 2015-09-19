#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    double c,k;
    double d, l;
    cout<<"c=";
    cin>>c;
    cout<<"k=";
    cin>>k;
    d=exp(c)+(4-sin(c)*sin(k))/pow(sin(k),2);
    l=(pow(k,2)/pow((4+k),2))+c;
    cout << "d=" << d << endl<<"l="<<l<<endl;
 
    return 0;
}

