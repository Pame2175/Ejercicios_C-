#include <iostream>
#include <conio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
 int vec[4];//declaro mi vector que contendra 4 elementos
 int aux=0, cont=0,acu=0;
 int matriz[4][4];//declaro mi matriz 4x4
 srand(time(NULL));//random generara una matriz de 4x4 de forma aleatoria
 cout<<"Matriz 4x4 generado de manera aleatoria"<<endl;
 for(int c=0; c<4;c++)//recorro las columnas
 {
    vec[c]=0;//vacio mi vector
}
 for(int i=0;i<4;i++)//recorro las filas
 {
    for(int c=0;c<4;c++)//recorro las columnas
	{
         
    matriz[i][c]=1+rand()%(9);//almaceno la matriz de manera aleatoria
    cout<<matriz[i][c]<<" ";//Muestro por pantalla la matriz formada a partir de los números aleatorios
    vec[c]=vec[c]+matriz[i][c];//hago la sumatoria de cada columna
    
        
    if(i==c)
    {
    acu=acu+matriz[i][c];//sumatoria de la diagonal principal
    }
    if (i==0 and c==0)
    {
    aux=matriz[i][c];//se guarda en una variable auxiliar los valores repetidos del primer elemento
    }
    if(matriz[i][c]==aux)//si la matriz es igual a los valores guardados en auxiliar 
    {
	cont++;//se cuenta las veces que se repite el primer elemento
	}
    }
    cout<<endl;
    }
     cout<<"La sumatoria de cada columna es:"<<endl;
  for(int c=0; c<4;c++)//recorro las columnas,para que en cada recorrido vaya tirando la suma de cada columna
   {    
        cout<<vec[c]<<" ";//y muestro por pantalla la sumatoria de cada columna
    }
    cout<<endl<<"La sumatoria de la diagonal principal es:"<<endl<<acu<<endl;
     cout<<"El primer elemento se repite:"<<endl<<cont<<endl;
    return 0;
}

