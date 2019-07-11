#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a1[5];
    int a2[5];
    cout<<"Please enter 5 numbers which assigned to a1"<<endl;
    for(int i=0;i!=5;++i)
	cin>>a1[i];
    cout<<"Please enter 5 numbers which assigned to a2"<<endl;
    for(int i=0;i!=5;++i)
	cin>>a2[i];

    int i=0;
    for(;i!=5;++i)
	if(a1[i]!=a2[i])
	{
	    cout<<"Array a1 is not equal to array a2."<<endl;
	    break;
	}
    if(i==5)
	cout<<"Array a1 is equal to array a2."<<endl;
	
    vector<int> v1;
    vector<int> v2;
    int t;
    cout<<"Please enter 5 numbers which assigend to v1."<<endl;
    for(int i=0;i!=5;++i)
    {
	cin>>t;
	v1.push_back(t);
    }
    cout<<"Please enter 5 numbers which assigned to v2."<<endl;
    for(int i=0;i!=5;++i)
    {
	cin>>t;
	v2.push_back(t);
    }

    if(v1==v2)
	cout<<"Vector v1 is equal to vector v2"<<endl;
    else
	cout<<"Vector v1 is not equal to vector v2"<<endl;

    return 0;
}
