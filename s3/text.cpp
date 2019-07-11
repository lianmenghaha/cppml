#include<iostream>
using namespace std;
int main()
{
    int i=42;
    const int &r=i;
    cout<<"i= "<<i<<endl;
    cout<<"r= "<<r<<endl;
    cout<<"after i=42"<<endl;
    i=42;
    cout<<"i= "<<i<<" r= "<<r<<endl;
    return 0;
}
