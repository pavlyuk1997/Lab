#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    short int i;
    int b,a[20];
    cout<<"b="<<endl;
    cin>>b;
    for(i=0;i<20;i++){
       cout<<"a["<<i+1<<"]=";
       cin>>a[i];
    }
    if(b>0){
       float K;
       K=0;
       for(i=0;i<20;i++){
           if(a[i]>0)                  
              K++;
       }
       cout<<"K="<<K<<endl;
    } else {
       float S;
       S=0;
       for(i=0;i<20;i++){
           if(a[i]%2==1)
           {                  
           S+=a[i];
       }
       }
       cout<<"S="<<S<<endl;
    }

    return 0;
}

