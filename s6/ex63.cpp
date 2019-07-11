#include<iostream>
using namespace std;

//funciton fact
int fact(int n)
{
    int m=1;
    if(n<=1)
	return n;
    for(int i=n;i!=0;--i)
	m*=i;
    return m;
}

int main()
{
    cout<<"please enter a positive integral!"<<endl;
    int n;
    cin>>n;
    cout<<n<<"!= "<<fact(n)<<endl;
    return 0;
}
