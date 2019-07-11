#include<iostream>
using namespace std;
void f()
{
    cout<<"no parameter"<<endl;
}

void f(int a)
{
    cout<<"a= "<<a<<endl;
}

void f(int a,int b)
{
    cout<<"a= "<<a<<" b= "<<b<<endl;
}

void f(double a,double b=3.14)
{
    cout<<"a= "<<a<<" b= "<<b<<endl;
}

int main()
{
    f(42);
    f(42,0);
    f(2.56,3.14);
    return 0;
}
