#include<iostream>
#include"Account.h"

int main()
{
    Account act1;
    Account act2("Zhang San");
    Account act3("Li si",100.50);

    print(std::cout,act1)<<std::endl;
    print(std::cout,act2)<<std::endl;
    print(std::cout,act3)<<std::endl;

    return 0;
}

/*Output
   0
0
Zhang San 0
0
Li si 100.5
0
*/
