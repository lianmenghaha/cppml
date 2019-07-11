#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::string;

int main(int argc,char *argv[])
{
    cout<<"All "<<argc<<" argument"
	<<(argc>1?"s are:":" is")<<endl;

    for(int i=0;i!=argc+1;++i)
	cout<<i<<"\t"<<argv[i]<<endl;
    //if(argc<3)//programname argument1 argument2 0
	//return -1;
    //string args(argv[1]);
    //args+=argv[2];
    //cout<<args<<endl;
    //cout<<"argv[1]= "<<argv[1]<<endl;
    cout<<"argc="<<argc<<endl;
    return 0;
}
