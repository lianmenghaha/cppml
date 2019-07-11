#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Please enter an integer"<<endl;
    cin>>n;
    if(n%2==0)
	cout<<n<<" is even"<<endl;
    if(n%2==1)
	cout<<n<<" is odd"<<endl;
    return 0;
}
