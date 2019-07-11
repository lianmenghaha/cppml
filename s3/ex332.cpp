#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int ia[10];
    for(size_t i=0;i!=10;++i)
	ia[i]=i;
    cout<<"ia= "<<endl;
    for(auto k : ia)
	cout<<k<<" ";
    cout<<endl;

    int ia2[10];
    for(size_t i=0;i!=10;++i)
	ia2[i]=ia[i];
    cout<<"ia2= "<<endl;
    for(auto k : ia2)
	cout<<k<<" ";
    cout<<endl;

    vector<int> iv;
    for(int i=0;i!=10;++i)
	iv.push_back(i);
    cout<<"iv= "<<endl;
    for(auto k : iv)
	cout<<k<<" ";
    cout<<endl;

    vector<int> iv2(iv);
    cout<<"iv2(iv)="<<endl;
    for(auto k : iv2)
	cout<<k<<" ";
    cout<<endl;
    
    return 0;
}

