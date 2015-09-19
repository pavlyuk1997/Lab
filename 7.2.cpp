#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    short int i,j,M=3,N=5;
    float A[M][N],S;
    S=0;
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
               cout<<"A["<<i+1<<"]["<<j<<"]=";
               cin>>A[i][j];
               S+=A[i][j];
        }
    }
    cout<<"S="<<S<<endl;
  
    return 0;
}

