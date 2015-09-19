#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    short int i;
    double k,a[20];
    k=0; 
    for(i=0;i<20;i++)
    {
       cout<<"a["<<i+1<<"]=";
       cin>>a[i];}
       for(i=0;i<20;i++)
         if(a[i]!=0) k++ ;
    cout<<"K="<<k<<endl;
    
    return 0;
}

