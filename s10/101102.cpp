#include<list>
#include<string>
#include<algorithm>
#include<vector>
#include<iostream>
int main()
{
    //int val;
    std::string str;
    std::cout<<"Please enter a int for counting!"<<std::endl;
    std::cin>>str;
    //std::vector<int>vi;
    std::list<std::string> lstr;
    std::cout<<"Please enter a sequence of ints"<<std::endl;
    char c;
    for(std::string i;(std::cin>>i).get(c)&&c!='\n';lstr.push_back(i)){}
    std::cout<<"Value \""<<str<<"\"occurs "
	<<std::count(lstr.cbegin(),lstr.cend(),str)<<" time(s) in sequence"
	<<std::endl;

    return 0;
}
