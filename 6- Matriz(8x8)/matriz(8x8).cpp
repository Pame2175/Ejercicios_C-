#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
using namespace std;
int main()
{
int matriz[8][8];
int matriz2[8][8];
int contador=0;
srand(time(NULL));
cout<<"Primera matriz"<<endl;
for(int f=0;f<8;f++)
{
for(int c=0;c<8;c++)
{
matriz[f][c]=1+rand()%9;
cout<<matriz[f][c]<<" ";//imprimo mi primera matriz
matriz2[f][c]=matriz[f][c];
if (matriz2[f][c]<=5)
{
if (matriz2[f][c]==5)//si es exactamente 5 ,contara cuantas veces repite
{
contador=contador+1;
matriz2[f][c]=5;
}
else
{
matriz2[f][c]=matriz2[f][c]*2;//si es menor a 5 calculara el doble
}
}
else
{
matriz2[f][c]=matriz2[f][c]/2;//si es mayor que 5 divide por 2
}
}
cout<<endl;
}
cout<<endl;
cout<<"Segunda matriz"<<endl;
for(int f=0;f<8;f++)
{
for(int c=0;c<8;c++)
{
cout<<matriz2[f][c]<<" ";//imprimo me segunda matriz
}
cout<<endl;
}
cout<<"5 aparecio "<<contador<<" veces"<<endl;
}
