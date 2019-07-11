#include<iostream>
#include<utility>
#include<string>
#include<vector>
int main()
{
    std::vector<std::pair<std::string,int>> vp;
    std::string s;
    int i;
    char c;
    std::cout<<"Please enter a sequence of string and int!"<<std::endl;
    while((std::cin>>s>>i).get(c))
    {
	//vp.push_back({s,i});
	//vp.push_back(std::pari<std::string,int>(s,i));
	vp.push_back(std::make_pair(s,i));
	if(c=='\n')
	    break;
    }
    for(const auto &p:vp)
	std::cout<<p.first<<" , "<<p.second<<std::endl;
    return 0;
}
