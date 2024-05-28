#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int matriz[6][6];
	int matriz2[6][6];
	cout<<"Primera matriz"<<endl;
	for(int i=0;i<6;i++)
	{
	 for(int j=0;j<6;j++)
	 {
	if(i+j==4)
	{
		cout<<matriz[i][j]<<"*";
	}
	if(i==j)
	{
		cout<<matriz[i][j]<<"*";
		
	}
	if(i==5/2)
	{
		cout<<matriz[i][j]<<"*";
		
	}
	else
	{
		cout<<matriz[i][j]<<"*";
		
	}
}
cout<<endl;
}
return 0;
}

	
