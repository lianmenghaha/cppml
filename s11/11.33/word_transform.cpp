#include<iostream>
#include<fstream>
#include<sstream>
#include"function.cpp"
int main(int argc,char**argv)
{
    std::fstream map_file(argv[1],std::fstream::in);
    std::fstream in(argv[2],std::fstream::in);
    std::fstream out(argv[3],std::fstream::out);
    if(!map_file)
    {
	std::cerr<<"Cannot open file: "<<argv[1]<<std::endl;
	return -1;
    }
    if(!in)
    {
	std::cerr<<"Cannot open file: "<<argv[2]<<std::endl;
	return -2;
    }
    if(!out)
    {
	std::cerr<<"Cannot open file: "<<argv[3]<<std::endl;
	return -3;
    }
    word_transform(map_file,in,out);

    return 0;
}
