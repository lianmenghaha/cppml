#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1;
    cin>>s1;
    for(auto &c:s1)
	c='X';
    cout<<s1<<endl;
    //3.7 we use while
    string s2;
    getline(cin,s2);
    decltype(s2.size()) n=0;
    while(n!=s2.size())
	s2[n++]='X';
    cout<<s2<<endl;

    return 0;
}
