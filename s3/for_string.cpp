#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    //for(auto c:str)
	//cout<<c<<endl;


    //punct_cnt has the same type that s.size returns;
    //decltype(s.size()) punct_cnt=0;
    //count the number of punctuation characters in s
    //for(auto c:s)//for every char in s
	//if(ispunct(c))//if the character is punctuation,is true
	    //++punct_cnt;//increment the punctutation counter
    //cout<<punct_cnt
	//<<" punctuation characters in "<<s<<endl;



    //for (auto &c:s)//for every char in s(note: c is a reference) 
	//c=toupper(c);//c is a reference, so the assignment changes the char in s
    //cout<<s<<endl;



    //if(!s.empty())
	//cout<<s[0]<<endl;
    //else{
	//cerr<<"s is empty!!Wrong!!Go home!!"<<endl;
    //}


    if(!s.empty())
	s[0]=toupper(s[0]);
    cout<<s<<endl;

    return 0;
}
