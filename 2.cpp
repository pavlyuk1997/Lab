#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float C=1.231,D=1.152;
    float x,y;
    cout<<"x="; cin>>x;
    cout<<"y="; cin>>y;
    double A;
    if(x<y){A=exp(x*y)+D*log(x);}else{A=pow(x+C,1/3)+log(y);}
    cout<<"A="<<A<<endl;
    cout<<"x="; cin>>x;
    if(x<y){A=exp(x*y)+D*log(x);}else{A=pow(x+C,1/3)+log(y);}
    cout<<"A="<<A<<endl;
    
    return 0;
}

