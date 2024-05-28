#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int n=rand(),n2=rand();
	srand(time(NULL));
	n=rand();
	n2=rand();
	if(n>n2)
	{
		cout<<"El numero mayor es"<<n<<endl;
	}
	else
	{
		cout<<"El numero mayor es"<<n2<<endl;
		
		
	}
return 0;
}
	
	
