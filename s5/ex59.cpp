#include<iostream>
#include<string>

using namespace std;
int main()
{
    cout<<"Please write down a text!"<<endl;
    char ch;
    unsigned aCnt=0,eCnt=0,iCnt=0,oCnt=0,uCnt=0;
    while(cin>>ch)
    {
	if(ch=='a')
	    ++aCnt;
	else if(ch=='e')
	    ++eCnt;
	else if(ch=='i')
	    ++iCnt;
	else if(ch=='o')
	    ++oCnt;
	else if(ch=='u')
	    ++uCnt;
	else if(ch=='1')
	    break;
    }
    cout<<"Number of a: "<<aCnt<<'\n'
	<<"Number of e: "<<eCnt<<'\n'
	<<"Number of i: "<<iCnt<<'\n'
	<<"Number of o: "<<oCnt<<'\n'
	<<"Number of u: "<<uCnt<<endl;
    return 0;
}

