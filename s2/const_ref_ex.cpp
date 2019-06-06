#include<iostream>
using namespace std;
int main ()
{
    double dval=3.14;
    const int &ri=dval;
    cout<<"dval= "<<dval<<" ri= "<<ri<<endl;
    int i=42;
    int &r1=i;
    const int &r2=i;
    cout<<"Before: r1= "<<r1<<" r2= "<<r2<<" i= "<<i<<endl;
    r1=0;
    cout<<"After: r1= "<<r1<<" r2= "<<r2<<" i= "<<i<<endl;
    return 0;
}
