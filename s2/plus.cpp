#include<iostream>
using namespace std;
int main()
{
    unsigned u=10;
    int i=-42;
    cout<<i+i<<endl;
    cout<<u+i<<endl;//the int value -42 is converted to unsigned before the addtion is done.
    return 0;
}
