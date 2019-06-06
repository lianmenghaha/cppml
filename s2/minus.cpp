#include<iostream>
using namespace std;
int main()
{
    unsigned u1=42,u2=10;
    cout<<u1-u2<<endl;//ok,result is 32
    cout<<u2-u1<<endl;//ok,but the result will wrap around
    return 0;
}
