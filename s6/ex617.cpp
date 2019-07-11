#include<iostream>
#include<string>

using namespace std;

bool cap(const string &s)
{
    bool ind;
    for(auto &c:s)
    {
	if(isupper(c))
	    ind=true;
    }
    return ind;
}

void change(string &s)
{
    for(auto &c:s)
	c=tolower(c);
}

int main()
{
    cout<<"Please enter a string"<<endl;
    string s;
    cin>>s;
    bool ind=cap(s);
    change(s);
    cout<<"If there is any capital letters, it will be 1,otherweise 0 \n"
	<<ind<<endl;
    cout<<"After change: "<<endl;
    for(auto &c:s)
	cout<<c;
    cout<<endl;

    return 0;
}

