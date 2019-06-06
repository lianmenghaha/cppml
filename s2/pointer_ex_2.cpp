#include<iostream>
using namespace std;
int main()
{
    int i=42;
    int &r=i;//&follows a type and is part of declaration;r is a reference
    int *p;//*follows a type and is part of a declaration;p is a pointer
    p=&i;//not *p=&i
    cout<<"p= "<<*p<<" i= "<<i<<endl;
    *p=i;
    cout<<"p= "<<*p<<" i= "<<i<<endl;
    int &r2=*p;
    cout<<"r2= "<<r2<<" p= "<<*p<<endl;
    //int zero=0;
    //pi=zero;
    return 0;
}
