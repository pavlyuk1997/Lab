#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float x,y;
    x=0;
    do {
       y=2*x+tan(x)+exp(x)-log10(2+x);
        cout<<"x="<<x<<" y="<<y<<endl;
        x+=0.1;
    } while(x<=1);
   
    return 0;
}

