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
		matriz[i][j]=1;
		cout<<matriz[i][j]<<" ";
			
		}
		cout<<endl;
	}
	cout<<"Segunda matriz"<<endl;
	for(int i=0;i<6;i++)
	{
	 for(int j=0;j<6;j++)
	 {
	if(i==j)
	{
	matriz[i][j]=0;	
	cout<<matriz[i][j]<<" ";
	}
	else
	{
		matriz[i][j]=1;
		cout<<matriz[i][j]<<" ";	
		
	}
	
}
cout<<endl;
}


	return 0;
}

	
