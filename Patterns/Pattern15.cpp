#include<iostream>
using namespace std;

int main()
{	
	for(int i=0;i<3;i++)
	{
		for(int j=i+1;j<3;j++)
			cout<<" ";
		for(int j=1;j<=2*i+1;j++)
			cout<<j;
		cout<<endl;
	}
	
	for(int i=2;i>0;i--)
	{
		for(int j=i;j<=2;j++)
			cout<<" ";
		for(int j=1;j<=2*i-1;j++)
			cout<<j;
		cout<<endl;
	}
	
	return 0;
}
