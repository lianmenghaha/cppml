#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    vector<int> ival;
    int i;
    while(cin>>i)
	ival.push_back(i);
    for(const auto &k:ival)
	cout<<k<<" ";
    cout<<endl;
    return 0;
}
