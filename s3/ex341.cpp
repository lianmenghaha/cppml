#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    int ia[]={1,2,3,4,5,6,7,8};
    vector<int> ivec(begin(ia),end(ia));
    for(const auto &k: ivec)
	cout<<k<<" ";
    cout<<endl;
    
    return 0;
}
