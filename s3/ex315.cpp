#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector<string> sval;
    string s;
    while(getline(cin,s))
	sval.push_back(s);
    for(const string &k:sval)
	cout<<k<<" ";
    cout<<endl;
    return 0;
}

