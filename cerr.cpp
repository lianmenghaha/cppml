#include<iostream>
#include<string>
using namespace std;
int main()
{
	string in_string;
	cout<<"Please enter your name: ";
	cin>>in_string;
	if(in_string.empty())
		cerr<<"error: input string is empty!"<<endl;
	else cout<<"hello, "<<in_string<<endl;
}
