#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::ostream;
using std::istream;
struct Person
{
    //constructor
    Person()=default;
    Person(const string &n):name(n){}
    Person(const string &n,const string &a): name(n),address(a){}
    Person(istream &);
    //
    string name;
    string address;

    
    //Declaration and Definition of MF
    string getname() const{return name;}
    string getaddress() const{return address;}
};
//Definition of read
istream &read (istream &is,Person &item)
{
    is>>item.name>>item.address;
    return is;
}
//constructor for read
Person::Person(istream &is)
{
    read(is,*this);
}
//Def. of print
ostream &print (ostream &os,const Person &item)
{
    os<<"name: "<<item.getname()<<" "
	<<"address: "<<item.getaddress();
    return os;
}


int main()
{
    Person p1;
    Person p2("HUIHUI");
    Person p3("Huihui","Obersendling");
    Person p4(cin);//input: xufei knorr

    print(cout,p1)<<endl;//name: address:
    print(cout,p2)<<endl;//name: HUIHUI address:
    print(cout,p3)<<endl;//name: Huihui address: Obersendling
    print(cout,p4)<<endl;//name: xufei address: knorr

    return 0;
}

