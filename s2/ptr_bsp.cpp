#include<iostream>
using namespace std;
int main()
{
    int i=42;
    int *pi=0;//pi is initialized but addresses no object
    int *pi2=&i;//pi2 initialized to hold the address of i
    int *pi3;
    pi3=pi2;
    cout<<"i= "<<i<<" pi2= "<<*pi2<<" pi3= "<<*pi3<<endl;//此时不可以输出*pi,无错误但是会产生segement fault=11
    
    double obj=3.14,*pd=&obj;
    //ok:void* can hold the address value of any data pointer type
    void *pv=&obj;//obj can be an object of any type
    pv=pd;//pv can hold a pointer to any type
    
    return 0;
}
