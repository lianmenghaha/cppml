#include<iostream>
#include<string>
#include<map>
#include<set>

int main()
{
    std::map<std::string,std::size_t> word_count;
    std::string word;
    char c;
    while((std::cin>>word).get(c))
    {
	++word_count[word];
	if(c=='\n')
	    break;
    }

    for(const auto &w:word_count)
	std::cout<<w.first<<" occurs "<<w.second
	    <<((w.second>1)?" times":" time")<<std::endl;
    return 0;

 }

