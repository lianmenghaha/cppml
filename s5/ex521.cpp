#include<iostream>
#include<string>

using namespace std;
int main()
{
    string word,upr;
    char c;
    bool b=false;

    while((cin>>word).get(c))
    {
	if(!isupper(word[0]))
	    continue;
	if(upr==word)
	{
	    cout<<word<<" occurs twice in succession."<<endl;
	    b=true;
	    break;
	}
	else
	    upr=word;
	if(c=='\n')
	    break;
    }
    if(!b)
	cout<<"No word was repeated!"<<endl;
    return 0;
}

