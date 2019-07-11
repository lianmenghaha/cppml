#include<iostream>
using namespace std;

double abs(double x)
{
    if(x>=0)
	return x;
    else
	return -x;
}
int main()
{
    cout<<"Please enter an arbitrary number!"<<endl;
    double x;
    cin>>x;
    cout<<'|'<<x<<"|= "<<abs(x)<<endl;
    return 0;
}
