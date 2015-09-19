#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    short int i;
    float S,a;
    a=2.1;
    S=0;
    for(i=1;i<=10;i++){
       S+=pow(a*i+2,2);
    }
    cout<<"S="<<S<<endl;
  
    return 0;
}

