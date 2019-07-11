#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    vector<int> v1,v2;
    cout<<"Please enter two sequence of integrals!"<<endl;
    //cin two vectors
    int i;
    char c;
    while(((cin>>i).get(c)))
    {
	v1.push_back(i);
	if(c=='\n')
	    break;
    }
    //cin.clear();
    while(((cin>>i).get(c)))
    {
	v2.push_back(i);
	if(c=='\n')
	    break;
    }
    //print two variables
    cout<<"v1 is "<<endl;
    for(auto k:v1)
	cout<<k<<'\t';
    cout<<endl;
    cout<<"v2 is "<<endl;
    for(auto k:v2)
	cout<<k<<'\t';
    cout<<endl;
    // we compare two vectors,
    //1st, the size of two vectors,
    decltype(v1.size()) s1=v1.size(),s2=v2.size();
    bool b;
    
    if(s1<=s2)//v1是长度较短的
    {
	for(decltype(v1.size())n=0;n!=v1.size();++n)
	    b=(v1[n]==v2[n])?true:false;
    }
    else//v2是长度较短的
    {
	for(decltype(v2.size())n=0;n!=v2.size();++n)
	    b=(v1[n]==v2[n])?true:false;
    }

    cout<<boolalpha;
    cout<<b<<endl;
    
    return 0;
}
