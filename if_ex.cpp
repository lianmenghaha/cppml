#include<iostream>
using namespace std;
int main()
{
    int currVal=0,val=0;
    if(cin>>currVal)
    {
	int cnt=1;
	while(cin>>val)//read the remaining numbers
	{
	    if(val==currVal)
		++cnt;
	    else{
		cout<<currVal<<" occurs "<<cnt<<" times"<<endl;
		    currVal=val;// remember the new value
		cnt=1;
	    }
	}
	cout<<currVal<<" occurs "<<cnt<<" times"<<endl;
    }
    return 0;

}//有问题，在最后一组100时，没有办法自动跳出程序
