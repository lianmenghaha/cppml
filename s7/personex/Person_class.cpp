#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::ostream;
using std::istream;
class Person
{
    friend istream &read(istream &,Person &);
    //friend ostream &print(ostream &,Person&);
    //friend ostream &print(ostream &,const Person &);
    private:
    //data members which are part of implementation should be private
    string name;
    string address;

    public:
    //member methods which are part of interface should be public
    //Declaration and Definition of MF
    string getname() const{return name;}
    string getaddress() const{return address;}
    //constructors which are part of interface should be public
    //constructor
    Person()=default;
    explicit Person(const string &n):name(n){}
    Person(const string &n,const string &a): name(n),address(a){}
    explicit Person(istream &);
};
//Definition of read
istream &read (istream &is,Person &item)
{
    is>>item.name>>item.address;//'name'is a private member of 'Person'
    return is;//'address' is also a private member
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

    Person p;
    read(cin,p);
    print(cout,p);
    return 0;
}

