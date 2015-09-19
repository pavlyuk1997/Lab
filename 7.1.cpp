#include <iostream>
using namespace std;
int main()
{
const int m = 5, n = 3;
int arr[m][n] = {{4, 1, -5},
                           {-11, 2, 8},
                           {4, 9, -3},
                           {15, 6, -23},
                           {1, -3, -8}};
int x[n];
int max;
for (int j = 0; j < n; j++)
{max = 0;
for (int i = 0; i < m; i++)
{if (arr[max][j] < arr[i][j])
{max = i;
}
}
x[j] = arr[max][j];
}
cout << "vector x:" << "\n";
for (int i = 0; i < n; i++)
{cout <<x[i] << " ";}
cout<<endl;

return 0;
}

