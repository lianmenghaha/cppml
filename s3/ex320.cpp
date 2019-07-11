#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    vector<int> ival;
    while(cin>>n)
	ival.push_back(n);

    for(auto&i:ival)
	cout<<i<<" ";
    cout<<endl;
    // print the sum of each piar of adjacent elements
    cout<<"The sum of each pair of adjacent elements is: "<<endl;

    for(decltype(ival.size()) k=0;k<ival.size()-1;++k)
	    cout<<ival[k]+ival[k+1]<<"\t";
    cout<<endl;
    //print the sum of the first and last elements,follwed by the sum of the
    //second and second-to-the last,and so on

    auto mid=(ival.size()-1)/2;
    for(decltype(ival.size()) k1=0;k1<=mid;++k1)
	cout<<ival[k1]+ival[ival.size()-1-k1]<<"\t";
    cout<<endl;
    return 0;
}
