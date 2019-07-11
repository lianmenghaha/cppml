#include<iostream>
#include"Debug.h"

int main()
{
    constexpr Debug io_sub(false,true,false);
    if(io_sub.any())
	std::cerr<<"Error message 1"<<std::endl;
    print(std::cout,io_sub);//010

    constexpr Debug nodbg=false;
    if(nodbg.any())
	std::cerr<<"Error message 2"<<std::endl;
    print(std::cout,nodbg);//000

    Debug dbg(false);
    if(dbg.any())
	std::cerr<<"Error message 3"<<std::endl;
    print(std::cout,dbg);//000
    dbg.set_other(true);
    if(dbg.any())
	std::cerr<<"Error message 4"<<std::endl;
    print(std::cout,dbg);//001

    return 0;
}

//Output: Errow message 1,Errow message 4
