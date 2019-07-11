#include<iostream>
#include<list>

int main()
{
    std::list<int> lst={0,1,2,3,4,5,6,7,8,9};
    auto it=lst.begin();
    while(it!=lst.end())
	if(*it%2)
	    it=lst.erase(it);
	else
	    ++it;
    for(const auto &ele:lst)
	std::cout<<ele<<std::endl;
    return 0;
}
