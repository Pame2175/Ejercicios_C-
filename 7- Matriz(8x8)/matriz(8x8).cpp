#include <iostream>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
using namespace std;
int main()
{ 
    int matriz[8][8];
    int matriz2[8][8];
    int cont=0;
	int cont1=0,cont2=0;
    srand(time(NULL));
    for(int f=0;f<8;f++)
    {
        for(int c=0;c<8;c++)
        {
            matriz[f][c]=1+rand()%9;
            matriz2[f][c]=matriz[f][c];
            if (matriz2[f][c]<=5)
            {  
                if (matriz2[f][c]==5)
                {
                    cont=cont+1;
                    matriz2[f][c]=5;
                }
                else
                {
                    matriz2[f][c]=matriz2[f][c]*2;
                }
            }
            else
            {
                matriz2[f][c]=matriz2[f][c]/2;
            }
            if (f==c and matriz[f][c]==matriz[0][0])
            {  
                cont1=cont1+1;
            }
            if (matriz[f][c]==matriz2[0][0])
            {  
                cont2=cont2+1;
            }
        }
    }
    for(int f=0;f<8;f++)
    {
        for(int c=0;c<8;c++)
        {
            cout<<matriz[f][c]<<" ";
        }
    cout<<endl;
    }
    cout<<"El primer valor de la primera matriz se repitio "<<cont1<<" veces"<<endl;
    for(int f=0;f<8;f++)
    {
        for(int c=0;c<8;c++)
        {
            cout<<matriz2[f][c]<<" ";
        }
    cout<<endl;
    }
    cout<<"5 aparecio "<<cont<<" veces"<<endl;
    cout<<"El primer valor de la segunda matriz se repitio "<<cont2<<" veces en la primera matriz "<<endl;
}

