#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

int main(){
setlocale (LC_ALL, "Ukrainian");

char a[100];
cout<<"Введіть текст"<<endl;
gets (a);
int k=0;
for(int i=0; i< strlen (a); i++)
{
	if (isdigit(a[i]))
	k++;
}
cout<<endl<<"Кількість цифр "<<k;
return 0;
}
