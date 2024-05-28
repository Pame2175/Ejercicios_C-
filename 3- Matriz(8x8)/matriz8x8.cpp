#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	int matriz[8][8];
	int aleatorio=0;
	cout<<"Matriz 8x8"<<endl;
	for (int f=0;f<8;f++)
	{
		for(int c=0;c<8;c++)
		{
			aleatorio=1+rand()%(9);
			matriz[8][8]=aleatorio;
			cout<<matriz[8][8]<<" ";
		}
		cout<<endl;
	}
	getch ();
	return 0;
}
