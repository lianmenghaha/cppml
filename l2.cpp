/*
	loops: for, while
	memory allocate: new
*/
#include<iostream>
using namespace std;
int main()
{
	int d[5];
	for(int i=0;i<5;i++)
		d[i]=0;
	for(int i=0;i<5;i++)
	{
		d[i] = 50 * i + 1500;
		cout << i <<": "<< d[i] << endl;
	}
	int ite=0;
	while(true)
	{	
		// body
		ite++;
		if(ite>=10)
		{
			cout<<"ok"<<endl;
			break;
		}
		cout<<"part2: "<<ite*10<<endl;
	}
	int size=0;
	cin>>size;
	int a[5][6];
	int *b=new int [size];
	int **c=new int *[size];
	for(int i=0;i<3;i++)
		c[i]=new int [size+2];
	b[0]=10;
	c[0][2]=3;
	// int size=0, a[5], *b;
	cout<<b[0]<<endl;
	cout<<c[0][2]<<endl;
}
