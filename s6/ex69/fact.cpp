#include "Chapter6.h"
#include<iostream>
int fact(int n)
{
    if(n<0)
	std::cerr<<"n must greater than 0 for factorial!"<<std::endl;
    else if(n==1)
	return n;
    unsigned f=1;
    for(int i=n;i!=0;--i)
	f*=i;
    return f;
}
