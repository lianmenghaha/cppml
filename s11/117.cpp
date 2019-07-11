#include<string>
#include<map>
#include<vector>
#include<iostream>
#include<sstream>
#include<fstream>
//map<family name,vector<first name>>
typedef std::map<std::string,std::vector<std::pair<std::string,std::string>>> family_type;

void addFamily(family_type &families,const std::string &name);
void addChild(family_type &families,const std::string &family_name,const std::string &child_name,const std::string &birthday);


int main(int argc,char**argv)
{
    std::fstream in(argv[1],std::fstream::in);
    if(!in)
	std::cerr<<"Fail to open file argv[1]"<<std::endl;
    std::fstream out(argv[2],std::fstream::app);
    if(!out)
	std::cerr<<"Fail to open file argv[2]"<<std::endl;

    family_type families;
    std::string f_name;
    std::string c_name;
    std::string birthday;
    std::string strtmp;
    while(getline(in,strtmp))
    {
       if(strtmp[strtmp.size()-1]==':')
       {
	   std::string familyname=strtmp.substr(0,strtmp.size()-1);
	   addFamily(families,familyname);
       }
       else
       {
	   auto posf=strtmp.find_first_of(",");
	   auto posl=strtmp.find_last_of(",");
	   f_name=strtmp.substr(0,posf);
	   c_name=strtmp.substr(posf+1,posl-posf-1);
	   birthday=strtmp.substr(posl+1,strtmp.size()-posl-1);
	   addChild(families,f_name,c_name,birthday);
       }
   }
   for(const auto&family:families)
   {
       for(const auto&child:family.second)
       {
	   out<<"Family name: "<<family.first<<std::endl;
	   out <<"Child name: "<<child.first<<" "
	       <<"Birthdy: "<<child.second<<std::endl;
       }
   }
   return 0;
}
//待写！！
void addFamily(family_type &families,const std::string &name)
{
    auto ret=families.insert({name,std::vector<std::pair<std::string,std::string>>()});
    if(!ret.second)//insert does nothing,i.e.,this name as key,is already ex
        std::cerr<<"Error: Already has family <"<<name<<">"<<std::endl;
}

void addChild(family_type &families,const std::string &family_name,const std::string &child_name,const std::string &birthday)
{
    auto it=families.find(family_name);
    if(it!=families.end())
        it->second.push_back({child_name,birthday});
    else
        std::cerr<<"Error:No family<"<<family_name<<"> for child <"
            <<child_name<<">"<<std::endl;
}








