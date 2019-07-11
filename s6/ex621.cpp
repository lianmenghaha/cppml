#include<iostream>
using namespace std;

int compare(int i,const int *ip)
{
    if(i>=*ip)
	return i;
    else
	return *ip;
}

int main()
{
    cout<<"Please enter two ints"<<endl;
    int i,j;
    cin>>i>>j;
    int *ip=&j;
    cout<<"The larger is "<<compare(i,ip)<<endl;
    cout<<"The larger is "<<compare(i,&j)<<endl;
    return 0;
}
