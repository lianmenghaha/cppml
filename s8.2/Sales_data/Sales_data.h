#ifndef SALES_DATA
#define SALES_DATA
#include<iostream>
#include<string>
#include<fstream>

class Sales_data;
std::istream &read(std::istream&,Sales_data&);

class Sales_data
{
    friend Sales_data add(const Sales_data&,const Sales_data &);
    friend std::istream &read(std::istream&,Sales_data&);
    friend std::ostream &print(std::ostream&,const Sales_data&);

    public:
    //constructor
    Sales_data():Sales_data("",0,0.0){}
    explicit Sales_data(const std::string&no):bookNo(no){}
    Sales_data(const std::string&no,unsigned us,double price):
	bookNo(no),units_sold(us),revenue(us*price){}
    explicit Sales_data(std::istream&is):
	Sales_data(){read(is,*this);}

    //MF
    std::string isbn()const{return bookNo;}
    Sales_data &combine(const Sales_data&);

    private:
    double avg_price() const;
    std::string bookNo;
    unsigned units_sold=0;
    double revenue=0.0;
};
//define combine
Sales_data &Sales_data::combine(const Sales_data&item)
{
    units_sold+=item.units_sold;
    revenue+=item.revenue;
    return *this;
}
//define add
Sales_data add(const Sales_data&item1,const Sales_data&item2)
{
    Sales_data sum=item1;
    sum.combine(item2);
    return sum;
}
//define read
std::istream &read(std::istream&is,Sales_data &item)
{
    double price;
    is>>item.bookNo>>item.units_sold>>price;
    item.revenue=item.units_sold*price;
    return is;
}
//define print
std::ostream &print(std::ostream &os,const Sales_data &item)
{
    os<<item.isbn()<<" "<<item.units_sold<<" "
	<<item.revenue<<" "<<item.avg_price();
    return os;
}
inline
double Sales_data::avg_price() const
{
    return units_sold?revenue/units_sold:0;
}

int process_transaction(std::istream &in,std::ostream &out)
{
    Sales_data total;
    if(read(in,total))
    {
	Sales_data trans;
	while(read(in,trans))
	{
	    if(total.isbn()==trans.isbn())
	    {
		total.combine(trans);
	    }
	    else
	    {
		print(out,total)<<std::endl;
		total=trans;
	    }
	}
	print(out,total)<<std::endl;
    }
    else
    {
	std::cerr<<"No Data!"<<std::endl;
	return -1;
    }
    return 0;
}












#endif
