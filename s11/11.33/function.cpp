#ifndef FUNCTION
#define FUNCTION
#include<iostream>
#include<fstream>
#include<sstream>
#include<map>
#include<string>
#include<stdexcept>
typedef std::map<std::string,std::string> trans_type;

//bildmap存储转换规则
trans_type bildMap(std::fstream &map_file)
{
    trans_type trans_map;
    std::string key;
    std::string value;
    while(map_file>>key&&getline(map_file,value))
    {
	if(value.size()>1)
	    trans_map[key]=value.substr(1);
	else
	    throw std::runtime_error("no rule for "+key);
    }
    return trans_map;
}
//transform使用转换规则对input进行转换
const std::string &
transform(const std::string &s,const trans_type &trans_map)
{
    auto map_it=trans_map.find(s);
    if(map_it!=trans_map.end())
	return map_it->second;
    else
	return s;
}
//word_transform
void word_transform(std::fstream &map_file,std::fstream &in,std::fstream &out)
{
    auto trans_map=bildMap(map_file);
    std::string line;
    while(getline(in,line))
    {
	std::istringstream iss(line);
	std::string word;
	bool space=true;
	while(iss>>word)
	{
	    if(space)
		space=false;//ohne space bevor der ersten line
	    else
		out<<" ";
	    out<<transform(word,trans_map);
	}
	out<<"\n";
    }
}


















#endif
