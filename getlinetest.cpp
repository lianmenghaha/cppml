#include<fstream>
#include<iostream>
#include<string>
using std::string;
using std::fstream;

int main(int argc,char**argv)
{
    std::fstream in(argv[1],fstream::in);
    string line;
    string str;
    in>>str;
    std::cout<<str;
    while(getline(in,line))
	std::cout<<line<<std::endl;
    return 0;
}
