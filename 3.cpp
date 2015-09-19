#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int A, B, x;
cout<<"A="; cin>>A;
cout<<"B="; cin>>B;
switch (A)
{
       case 0:
       switch(B){
                 case 0: x=0; break;
                 case 1: x=0; break;
                 }
                 break;
       case 1:
       switch(B){
                 case 0: x=0; break;
                 case 1: x=1; break;
                 }
                 break;
                 }
                 cout<<"x="<<x<<endl;
               
                 return 0;
                 }

