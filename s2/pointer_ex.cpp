#include<iostream>
using namespace std;
int main()
{
    int ival=42;
    int *p=&ival;//p holds the address of ival;p is a pointer to ival
    cout<<"p= "<<*p<<endl;
    *p=0;//*yields the object;we assign a new value to ival through 
    cout<<"p= "<<*p<<" ival= "<<ival<<endl;
    return 0;
}
