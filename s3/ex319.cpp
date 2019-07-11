#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1(10,42);
    vector<int> v2={42,42,42,42,42,42,42,42,42,42};
    vector<int> v3(10);
    for(auto &i:v3)
	i=42;
    vector<int> v4;
    for(decltype(v4.size())i=0; i<10;++i)
	v4.push_back(42);

    for(auto &k1:v1)
    cout<<k1;
    cout<<endl;
    for(auto &k2:v2)
    cout<<k2;
    cout<<endl;
    for(auto &k3:v3)
    cout<<k3;
    cout<<endl;
    for(auto &k4:v4)
    cout<<k4;
    cout<<endl;
    return 0;
}
