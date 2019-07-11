#include<string>
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    stringstream ss;
    ss.str("Example string");
    string s=ss.str();
    cout<<s<<endl;
    return 0;
}
