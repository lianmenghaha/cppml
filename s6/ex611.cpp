#include<iostream>
using namespace std;

void reset(int &i)
{
    i=0;
}
int main()
{
    cout<<"Please enter a int"<<endl;
    int j;
    cin>>j;
    reset(j);
    cout<<"After reset j= "<<j<<endl;
    return 0;
}
