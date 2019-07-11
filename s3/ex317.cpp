#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector<string> sv;
    string s;
    while(cin>>s){
	if(s=="exit")
	    break;
	sv.push_back(s);
    }
    for(auto &ele : sv)
	for(auto &c : ele)
	    c=toupper(c);
    for(decltype(sv.size()) i=0; i<sv.size();++i){
	cout<<sv[i]<<'\t';
	if((i+1)%8==0)
	    cout<<endl;
    }
    cout<<endl;

    return 0;
}
