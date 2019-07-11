#include<iostream>
#include<initializer_list>

int sumIntList(std::initializer_list<int> il)
{
    int sum=0;
    for(auto &elem:il)
	sum+=elem;
    return sum;
}

int main()
{
    std::cout<<"The sum is\n"
	<<sumIntList({1,2,3,4,5,6,7,8,9,10})<<std::endl;
    return 0;
}
