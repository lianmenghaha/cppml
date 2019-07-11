#include<vector>
#include<list>
#include<iostream>
#include<iterator>

int main()
{
    int ia[]={0,1,1,2,3,4,8,13,21,55,89};
    //copy ia into a vector and into a list
    std::vector<int> iv(std::begin(ia),std::end(ia));
    std::list<int> il(std::begin(ia),std::end(ia));

    std::cout<<"Before erase: "<<std::endl;
    //iv
    std::cout<<"Vector iv:"<<std::endl;
    for(const auto&ele:iv)
	std::cout<<ele<<"  ";
    std::cout<<std::endl;
    //il
    std::cout<<"List il:"<<std::endl;
    for(const auto&ele:il)
	std::cout<<ele<<"  ";
    std::cout<<std::endl;
    //iv:remove the even values,gerade
    for(auto it=iv.begin();it!=iv.end();)
	if(*it%2)//==1,falls ungerade,
	    ++it;
	else
	    it=iv.erase(it);
    //il:remove the odd values,ungerade
    for(auto it=il.begin();it!=il.end();)
	if(*it%2)
	    it=il.erase(it);
	else
	    ++it;

    std::cout<<"After erase: "<<std::endl;
    std::cout<<"Vector iv:"<<std::endl;
    for(const auto&ele:iv)
        std::cout<<ele<<"  ";
    std::cout<<std::endl;
    //il
    std::cout<<"List il:"<<std::endl;
    for(const auto&ele:il)
        std::cout<<ele<<"  ";
    std::cout<<std::endl; 
    return 0;
}
