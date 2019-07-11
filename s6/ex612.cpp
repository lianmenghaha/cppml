#include<iostream>

using namespace std;

void swap(int &i,int &j)
{
    int s=i;
    i=j;
    j=s;
}
int main()
{
    cout<<"Please enter two ints"<<endl;
    int i,j;
    cin>>i>>j;
    cout<<"i= "<<i<<"j= "<<j<<endl;
    swap(i,j);
    cout<<"After swap, i= "<<i<<" j= "<<j<<endl;
    return 0;
}
