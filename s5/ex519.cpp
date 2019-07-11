#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string user,word;
    vector<string> str;
    int cnt=0;

    do{
	cout<<"Please enter two strings"<<endl;
	for(int i=0;i!=2;++i)
	{
	    cin>>word;
	    str.push_back(word);
	}
	if(str[cnt].size()<=str[cnt+1].size())
	    cout<<str[cnt]<<endl;
	else
	{
	    cout<<str[cnt+1]<<endl;
	}
	cnt+=2;

	cout<<"More? Enter yes or no:"<<endl;
	cin>>user;
    }while(user[0]!='n');
    return 0;
}

