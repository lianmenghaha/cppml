#include<iostream>

using namespace std;

void swap(int *ip, int *jp)
{
    int zwi=*ip;
    int zwj=*jp;
    *ip=zwj;
    *jp=zwi;
}

int main()
{
    cout<<"Please enter two ints"<<endl;
    int i,j;
    cin>>i>>j;
    cout<<"After swap"<<endl;
    swap(&i,&j);
    cout<<"i= "<<i<<", j= "<<j<<endl;
    return 0;
}
