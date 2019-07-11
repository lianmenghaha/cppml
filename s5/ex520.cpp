#include<iostream>
#include<vector>
#include<string>

using namespace std;
int main()
{
    //写错了，是只要出现两次就会输出，不是连续出现两次= =
    vector<string> vs;
    string word;
    int cnt=0;
    char c;
    bool b;
    cout<<"Please enter the text!"<<endl;
    while((cin>>word).get(c))
    {
	++cnt;
	for(const auto &elem:vs)
	{
	    if(word==elem)
	    {
		cout<<elem<<" occurs twice in succession"<<endl;
		b=true;
	    }
	    else;
	}
	if(b==true)
	    break;
	else
	vs.push_back(word);
	if(c=='\n')
	{
	    cout<<"No word was repeated"<<endl;
	    break;
	}
    }
    
    return 0;
}


