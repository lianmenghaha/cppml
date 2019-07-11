#include<iostream>
#include<vector>
#include<sstream>
#include<fstream>
std::vector<int>::const_iterator hasValue(std::vector<int>::const_iterator beg,std::vector<int>::const_iterator end,int k)
{
    for(auto it=beg;it!=end;++it)
	if(k==*it)
	    return it;
    return end;
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
    std::string str;
    std::getline(in,str);
    std::istringstream iss(str);
    std::vector<int> vi;
    int k;
    while(iss>>k)
	vi.push_back(k);
    std::cout<<"Please enter the searching int!"<<std::endl;
    std::cin>>k;
    auto it=hasValue(vi.cbegin(),vi.cend(),k);
    if(it==vi.end())
	out<<"No found "<<k<<" in range"<<std::endl;
    else
	out<<"Found "<<*it<< " at position "<<it-vi.cbegin()<<std::endl;

    return 0;
}

