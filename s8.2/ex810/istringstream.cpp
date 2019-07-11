include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include<vector>

int main(int argc,char**argv)
{
    std::vector<std::string> vs;
    std::fstream in(argv[1],std::fstream::in);
    if(!in)
    {
	std::cerr<<"Fail to open file: "<<argv[1]<<std::endl;
	return -1;
    }
    for(std::string line;std::getline(in,line);vs.push_back(line)){}
    for(const auto &e:vs)
    {
	std::istringstream iss(e);//e 为一整行
	for(std::string word; iss>>word;std::cout<<word<<std::endl){}
    }

    return 0;
}
