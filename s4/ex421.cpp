#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int> iv;
    cout<<"Please enter the size of the vector:"<<endl;
    decltype(iv.size()) n;
    cin>>n;
    cout<<"Please enter "<<n<<" elements in this vector:"<<endl;
    int ivelem;
    for(decltype(iv.size()) p=0;p!=n;++p)
    {
	cin>>ivelem;
	iv.push_back(ivelem);
    }
    cout<<"Before the change, iv is:"<<endl;
    for(auto &ix:iv)
	cout<<ix<<" ";
    cout<<endl;
    cout<<"After the change:"<<endl;
    
    for(auto &ix:iv)
    {
	ix=(ix%2==1) ? 2*ix:ix;
    }
    for(auto &ix:iv)
	cout<<ix<<" ";
    cout<<endl;

    return 0;
}

