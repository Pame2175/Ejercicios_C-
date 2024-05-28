#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<time.h> 
using namespace std;
int main()
{
	int matriz[6][6];
	int aleatorio=0;
	int acu=0;
	srand(time(NULL));
	for(int f=0;f<6;f++)
	{
	   for(int c=0;c<6;c++)
	   {
	aleatorio=rand()%10;
	matriz[f][c]=aleatorio;
    cout<<matriz[f][c];//imprimo mi primera matriz
    if(f==c)
    {
    acu=acu+matriz[f][c];//sumatoria de la diagonal principal
    }
}
cout<<endl;
}
cout<<"La sumatoria de la diagonal principal es:"<<endl<<acu<<endl;
getch();
return 0;
	
}
