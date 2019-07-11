#include<iostream>
#include<stdexcept>


using namespace std;
int main()
{
    cout<<"Please enter two integers!"<<endl;
    int a,b;
    cin>>a>>b;
    if(b==0)
	throw runtime_error("Divide by 0");
	
	
	
	
	
	
    cout<<"The result of dividing the first number by the second is\n"
	<<a/b<<endl;

    return 0;




}
