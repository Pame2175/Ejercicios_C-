#include <iostream>
#include<conio.h>

using namespace std;
int main()
{
	int matriz[5][5];//declaro mi matriz 5x5
	for(int i=0;i<5;i++)//recorro mi columna
	{
	for(int c=0;c<5;c++)//recorro mi fila
	{
	if(i+c==4)//si mi columna es igual a mi columna
	{
	matriz[i][c]=1;//genero una diagonal principal con el numero 1
    }
	else
	matriz[i][c]=0;
    }
    }

for(int i=0;i<5;i++)
	{
	for(int c=0;c<5;c++)
	{
	cout<<matriz[i][c]<<" ";//muestro por pantalla mi matriz con diagonal principal 
	}
	cout<<endl;
	
}
	
return 0;
}
