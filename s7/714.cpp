#include<string>
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::istream;
using std::ostream;

struct Sales_data;
istream &read(istream &is,Sales_data &item);

struct Sales_data
{
    //default constructor
    Sales_data():bookNo(""),units_sold(0),revenue(0.0){}
    //constructor
    Sales_data(const std::string &no): bookNo(no){}
    Sales_data(const std::string &no,unsigned us,double price):
	bookNo(no),units_sold(us),revenue(price*us){}
    Sales_data(istream &is)
    {
	read(is,*this);
    }

    //MF
    string isbn() const {return bookNo;}
    //declaration of MF:combine
    Sales_data &combine(const Sales_data &);

    string bookNo;
    unsigned units_sold=0;
    double revenue=0.0;
};
//Define MF:combine: add one Sales_data obj. to another
Sales_data &Sales_data::combine(const Sales_data &item)
{
    units_sold+=item.units_sold;
    revenue+=item.revenue;
    return *this;
}
//Define interface fct: add,read, print
Sales_data add(const Sales_data &item1,const Sales_data &item2)
{
    Sales_data sum=item1;
    sum.combine(item2);
    return sum;
}
//read
istream &read(istream &is,Sales_data &item)
{
    double price;
    is>>item.bookNo>>item.units_sold>>price;
    item.revenue=price*item.units_sold;
    return is;
}
//print
ostream &print(ostream &os,const Sales_data &item)
{
    os<<"bookNo: "<<item.bookNo<<" "
	<<"units_sold: "<<item.units_sold<<" "
	<<"revenue: "<<item.revenue;
    return os;
}
//main

int main()
{
    Sales_data d1;
    Sales_data d2("abc");
    Sales_data d3("abc",5,2.5);
    //Sales_data d4(cin);

    print(cout,d1)<<endl;//bookNo: units_sold: 0 revenue: 0
    print(cout,d2)<<endl;//bookNo: abc units_sold: 0 revenue: 0
    print(cout,d3)<<endl;//bookNo: abc units_sold: 5 revenue: 12.5 (=5*2.5)
    //print(cout,d4)<<endl;

    return 0;
}

