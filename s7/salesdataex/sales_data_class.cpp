#include<iostream>
#include<string>
using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::string;
using std::ostream;
using std::istream;
class Sales_data
{
    friend Sales_data add(const Sales_data&,const Sales_data&);
    friend istream &read(istream&,Sales_data&);
    friend ostream &print(ostream&,const Sales_data&);
    public:
    //constructor
    Sales_data()=default;
    Sales_data(const string &no):bookNo(no){}
    Sales_data(const string &no,unsigned us,double p):
	bookNo(no),units_sold(us),revenue(p*us){}
    Sales_data(istream&);
    //MF
    string isbn()const{return bookNo;}
    Sales_data& combine(const Sales_data&);


    private:
    string bookNo;
    unsigned units_sold=0;
    double revenue=0.0;
    double avg_price() const;
};
//MF arg_price() as inline
inline
double Sales_data::avg_price() const
{
    return units_sold?revenue/units_sold:0;
}
//declaration of add read print
Sales_data add(const Sales_data&,const Sales_data&);
istream &read(istream&,Sales_data&);
ostream &print(ostream&,const Sales_data&);

//Define combine
Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold+=rhs.units_sold;
    revenue+=rhs.revenue;
    return *this;
}
//Declar.and Def add,print,read
Sales_data add(const Sales_data &lhs,const Sales_data &rhs)
{
    Sales_data sum=lhs;
    sum.combine(rhs);
    return sum;
}
//read
istream &read(istream &is,Sales_data &item)
{
    double price=0;
    is>>item.bookNo>>item.units_sold>>price;
    item.revenue=item.units_sold*price;
    return is;
}
//constructor for istream
Sales_data::Sales_data(istream &is)
{
    read(is,*this);
}
//print
ostream &print(ostream &os,const Sales_data &item)
{
    os<<"ISBN: "<<item.isbn()<<" "
        <<"The units sold: "<<item.units_sold<<" "
        <<"Revenue: "<<item.revenue<<" "
        <<"Avg.price: "<<item.avg_price();
    return os;
}

int main()
{
    Sales_data total(cin);//total initial read with cin
    if(cin)//here use istream constructor
    {
	Sales_data trans(cin);//istream constructor
	while(cin)//istream constructor
	{
	    if(total.isbn()==trans.isbn())
		total.combine(trans);
	    else
	    {
		print(cout,total)<<endl;
		total=trans;
	    }
	    read(cin,trans);
	}
	print(cout,total)<<endl;
    }
    else
    {
	cerr<<"No Data!"<<endl;
	return -1;
    }
    return 0;
}


