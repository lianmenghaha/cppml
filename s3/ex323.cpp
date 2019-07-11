#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> iv(10);
    for(int i=0;i!=10;++i)
	cin>>iv[i];
    for(auto it=iv.begin();it!=iv.end();++it)
	*it=2**it;
    for(const auto &elem:iv)
	cout<<elem<<"\t";
    cout<<endl;
    return 0;
}
