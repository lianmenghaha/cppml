#include<iostream>
#include<map>
#include<set>
#include<fstream>
#include<vector>
#include<string>
#include<iterator>

std::map<std::string,size_t>count_words(std::vector<std::string> &words)
{
    std::map<std::string,size_t> counts;
    for(const auto &w:words)
	++counts[w];
    return counts;
}
int main(int argc,char**argv)
{
    std::fstream in(argv[1],std::fstream::in);
    if(!in)
    {
	std::cerr<<"Fail to open file: "<<argv[1]<<std::endl;
	return -1;
    }
    std::fstream out(argv[2],std::fstream::app);
    if(!out)
    {
	std::cerr<<"Fail to open file: "<<argv[2]<<std::endl;
	return -2;
    }
    std::istream_iterator<std::string>i_iter(in),end;
    //sehr effizient um WORDS zu definieren
    std::vector<std::string> words(i_iter,end);//vom Beginn bis Ende des txt
    auto counts=count_words(words);
    for(const auto&c:counts)
	out<<c.first<<" occurs "<<c.second
	    <<(c.second>1?" times.":" time.")<<std::endl;

    return 0;
}
