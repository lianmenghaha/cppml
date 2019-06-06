#include<iostream>
#include<string>
using namespace std;
int main()
{
    string line;
    //while(getline(cin,line))
    //{
	//cout<<line<<endl;
	//if(!line.empty())
	if(line.size()>80)
	    cout<<line<<endl;
    //}
	while(getline(cin,line))
	{
	    cout<<line.size()<<endl;
	}

    return 0;
}
