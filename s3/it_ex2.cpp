#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector<string> text;
    string s;
    while(getline(cin:s))
    {
        for(decltype(text.size()) i=0;i!=text.size();++i)
	    text.push_back(s);
	
	if(s=="EXIT")
	    break;
    }
    for(auto it=text.cbegin();it!=text.cend();++it)
	cout<<*it<<endl;
    return 0;

}
