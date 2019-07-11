#include<iostream>
#include<stdexcept>

using namespace std;
int main()
{
    int a,b;
    cout<<"Please enter two integers!"<<endl;
    while(cin>>a>>b)
    {
	try{
	    if(b==0)
		throw runtime_error("Divided by 0");
	    cout<<"The result of dividing the 1st.numb.by the 2nd:\n"
		<<a/b<<endl;
	}
	catch(runtime_error err)
	{
	    cout<<err.what()
		<<"\nTry Again? Enter y or n"<<endl;
	    char c;
	    cin>>c;
	    if(!cin||c=='n')
		break;
	}
    }
    return 0;
}
