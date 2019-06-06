#include<iostream>
using namespace std;
int main()
{
    int ival=1024;
    int &refVal=ival;
    cout<<"ival= "<<ival<<" refVal= "<<refVal<<endl;
    ival=4;
    cout<<"ival= "<<ival<<" refVal= "<<refVal<<endl;
    refVal=2;
    cout<<"ival= "<<ival<<" refVal= "<<refVal<<endl;
    int ii=refVal;
    cout<<"ival= "<<ival<<" refVal= "<<refVal<<" ii= "<<ii<<endl;
    int &refVal3=refVal;
    cout<<"ival= "<<ival<<" refVal= "<<refVal<<" refVal3= "<<refVal3<<endl;
    int i,&ri=i;
    i=5;ri=10;
    cout<<"i= "<<i<<" ri= "<<ri<<endl;
    return 0;
}
