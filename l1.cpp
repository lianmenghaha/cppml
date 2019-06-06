/*
	Program architecture: 1. lib
			      2. namespace
			      3. main and other functions
	function archi: 1. var declaration (domain)
			2. body
	call function	
	std member: array, cin, cout, if, else
*/
#include<iostream>
#define mao 5
using namespace std;
int func1(int,double);
int g;
int main()
{
	int d;
	d=4;
	cin>>d;
	if(d==1)
		cout<<"test1"<<endl;
	else
		cout<<"test2"<<endl;
	func1(d, -1.3); // d=5
	cout<<func1(d-2, -1)<<endl;
	int a[5];
	a[0]=1;
	a[1]=15;
	a[2]=-3;
//	a[3]=9;
	a[4]=11;
	for(int i=0;i<5;i++)
	{
		// cout<<i<<endl;
		cout<<i<<" "<<a[i]<<endl;
	}
	int la;
	cin>>la;
	cout<<"The value you type in is: "<<la<<endl;
}
int func1(int a, double b)
{
	int d;
	d=5;
	cout<<d<<endl;
	if(a==3)
		cout<<"haha1"<<endl;
	else
		cout<<"haha2"<<endl;
	return 2*a+b-1;
}
/* void func1(int a, double b)
{
	int d;
	d=5;
	cout<<d<<endl;
	return;
	if(a==3)
		cout<<"haha1"<<endl;
	else
		cout<<"haha2"<<endl;
}*/
