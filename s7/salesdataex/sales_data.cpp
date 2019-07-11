#include<iostream>
#include<string>
using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::string;
using std::ostream;
using std::istream;
struct Sales_data
{
    //constructors
    Sales_data()=default;
    Sales_data(const string &no):bookNo(no){}
    Sales_data(const string &no,unsigned us,double p):
	bookNo(no),units_sold(us),revenue(p*us){}
    Sales_data(istream&);
    Sales_data(ostream&);


    string bookNo;
    unsigned units_sold=0;
    double revenue=0.0;
    //MF
    string isbn()const{return bookNo;}
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
};
//Define combine
Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold+=rhs.units_sold;
    revenue+=rhs.revenue;
    return *this;
}
//Define arg_price
double Sales_data::avg_price() const
{
    if(units_sold)
	return revenue/units_sold;
    else
	return 0;
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
//istream constructor
Sales_data::Sales_data(istream &is)
{
    read(is,*this);
}
//print
ostream &print(ostream &os,const Sales_data &item)
{
    os<<item.isbn()<<" "
	<<item.units_sold<<" "
	<<item.revenue<<" "
	<<item.avg_price();
    return os;
}
//ostream constructor
Sales_data::Sales_data(ostream &os)
{
    print(os,*this);
}



int main()
{
    Sales_data total;
    //double price;
    if(read(cin,total))
    //if(cin>>total.bookNo>>total.units_sold>>price)
    {
	//total.revenue=total.units_sold*price;
	Sales_data trans;
	while(read(cin,trans))
	//while(cin>>trans.bookNo>>trans.units_sold>>price)
	{
	    if(trans.bookNo=="EXIT")
		break;
	    //trans.revenue=trans.units_sold*price;
	    if(total.isbn()==trans.isbn())
	    //if(total.bookNo==trans.bookNo)
	    {
		//total.units_sold+=trans.units_sold;
		//total.revenue+=trans.revenue;
		total.combine(trans);
	    }
	    else
	    {
		print(cout,total)<<endl;
		//cout<<"total.bookNo= "<<total.bookNo<<" "
		    //<<"total.units_sold= "<<total.units_sold<<" "
		    //<<"total.revenue= "<<total.revenue<<endl;
		total=trans;//use default copy constructor
		//total.bookNo=trans.bookNo;
		//total.units_sold=trans.units_sold;
		//total.revenue=trans.revenue;
	    }
	}
	print(cout,total)<<endl;
	//cout<<total.bookNo<<" "
	    //<<total.units_sold<<" "
	    //<<total.revenue<<endl;
    }
    else
    {
	cerr<<"No data!"<<endl;
	return -1;
    }
    return 0;
}
