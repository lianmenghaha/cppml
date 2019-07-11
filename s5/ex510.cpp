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
        if(ch=='a'||ch=='A')
            ++aCnt;
        else if(ch=='e'||ch=='E')
            ++eCnt;
        else if(ch=='i'||ch=='I')
            ++iCnt;
        else if(ch=='o'||ch=='O')
            ++oCnt;
        else if(ch=='u'||ch=='U')
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

