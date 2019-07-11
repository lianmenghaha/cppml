#include<iostream>
#include<string>
using namespace std;
int main()
{
    string line;
    while(getline(cin,line))
    {
	if(line=="EXIT")
	    break;
	else
	    cout<<line<<endl;
    }
    return 0;
}
