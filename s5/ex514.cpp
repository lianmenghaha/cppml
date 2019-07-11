#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    cout<<"Please enter a text!"<<endl;
    vector<string> text;
    unsigned cnt=1;
    string str;

    while(cin>>str)
	text.push_back(str);
    
    auto beg=text.begin();
    while(beg!=text.end())
    {
	if(*beg==*(beg+1))
	    ++cnt;
	else
	{
	    cout<<"The word: "<<*beg<<" occured "<<cnt<<" times"<<endl;
	    cnt=1;
	}
	++beg;
    }
    return 0;
}


