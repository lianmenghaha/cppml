#include<iostream>
#include<vector>
#include<stdexcept>
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int add(int,int);
int subtract(int,int);
int multiple(int,int);
int divide(int,int);
int main()
{
    vector<int(*)(int,int)> vf;
    vf.push_back(add);
    vf.push_back(subtract);
    vf.push_back(multiple);
    vf.push_back(divide);
    cout<<"Please enter 2 ints"<<endl;
    int a,b;
    cin>>a>>b;
    for(const auto &e:vf)
	e(a,b);
    return 0;
}
int add(int a,int b)
{
    cout<<"The add of "<<a<<" and "<<b<<" is "<<a+b<<endl;
    return 0;
}
int subtract(int a,int b)
{
    cout<<"The subtract of "<<a<<" and "<<b<<" is "<<a-b<<endl;
    return 0;
}
int multiple(int a,int b)
{
    cout<<"The multiple of "<<a<<" and "<<b<<" is "<<a*b<<endl;
    return 0;
}
int divide(int a,int b)
{
    cout<<"The divide of "<<a<<" and "<<b<<":"<<endl;
    try{
	if (b==0)
	    throw std::runtime_error("Divide by 0.");
	return a/b;
    }catch(std::runtime_error err)
    {
	std::cerr<<err.what()<<std::endl;
	return 0;
    }
}


