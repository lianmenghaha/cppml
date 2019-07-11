#include<iostream>
#include "Chapter6.h"

int main()
{
    int n;
    char c;
    std::cout<<"Please enter a positive integral"<<std::endl;
    while((std::cin>>n).get(c))
    {
	std::cout<<n<<"!= "<<fact(n)<<std::endl;
	if(c=='\n')
	    break;
    }
    return 0;
}
