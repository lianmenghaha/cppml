#include<iostream>
using namespace std;
int main()
{
	int sum=0,val=50;
	while(val<=100)
	{
		sum+=val;
		++val;
	}
	cout<<"Sum of the numbers from 50 to 100 is: "<<sum<<endl;

	return 0;
}

