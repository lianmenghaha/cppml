#include"Sales_data.h"

int main(int argc,char**argv)
{
    if(argc<2)
    {
	std::cerr<<"Usage error"<<std::endl;
	return -3;
    }
    std::ifstream in(argv[1]);//ifstream
    if(!in)
    {
	std::cerr<<"Fail to open file: "<<argv[1]<<std::endl;
	return -2;
    }
    if(argc>=3)
    {
	std::ofstream out(argv[2],std::ofstream::app);//ofstream//ex8.8的修改
	if(!out)
	{
	    std::cerr<<"Fail to open file: "<<argv[1]<<std::endl;
	    return -2;
	}
	process_transaction(in,out);
    }
    else
    {
	process_transaction(in,std::cout);
    }
    return 0;
}


