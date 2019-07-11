#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<fstream>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::istringstream;
using std::ostringstream;
using std::endl;
using std::ifstream;
using std::getline;
using std::cerr;
using std::fstream;
struct PersonInfo
{
    string name;
    vector<string> phones;
};

constexpr int kPhoneNumberLength=11;

bool valid(const string &num)
{
    if(num.size()!=kPhoneNumberLength)
	return false;
    for(const auto &c:num)
    {
	if(c<'0'||c>'9')
	    return false;
    }
    return true;
}
string format(const string &num)
{
    return num.substr(0,3)+'-'+num.substr(3,4)+'-'+num.substr(7,4);
}


int main(int argc,char**argv)
{
    fstream in(argv[1],fstream::in);
    if(!in)
    {
	cerr<<"Fail to open file: "<<argv[1]<<endl;
	return -1;
    }
    fstream out(argv[2],fstream::out);
    if(!out)
    {
	cerr<<"Fail to open file: "<<argv[2]<<endl;
	return -2;
    }

    string line,word;
    vector<PersonInfo> people;
    while(getline(in,line))
    {
	istringstream record(line);
	PersonInfo info;
	record>>info.name;
	while(record>>word)
	    info.phones.push_back(word);
	people.push_back(info);
    }
    for(const auto &entry:people)//every PersonInfo
    {
	ostringstream formatted,badNums;
	for(const auto &nums:entry.phones)
	{
	    if(!valid(nums))
		badNums<<" "<<nums;
	    else
		formatted<<" "<<format(nums);
	}
	if(badNums.str().empty())
	    out<<entry.name<<" "<<formatted.str()<<endl;
	else
	    cerr<<"input error: "<<entry.name
		<<" invalid number(s) "<<badNums.str()<<endl;
    }

    return 0;
}













