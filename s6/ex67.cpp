#include<iostream>
using namespace std;
int foo()
{
    static int cnt=0;
    return cnt++;
}
int main()
{
    cout<<foo()<<endl;
    cout<<foo()<<endl;
    return 0;
}
