#include<iostream>
using namespace std;
int main()
{
    int a[10]={};
    for(size_t i=0;i<10;++i)
	a[i]=i;
    for(auto k : a)
	cout<<k<<" ";
    cout<<endl;
}

