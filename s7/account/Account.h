#ifndef ACCOUNT
#define ACCOUNT

#include<iostream>
#include<string>
class Account
{
    static constexpr int period=30;
    friend std::ostream &print(std::ostream &,const Account &);


    public:
	static double rate() {return interestRate;}
	static void rate(double);

	//constructor
	Account()=default;//:Account("",0){}//this two are equivalent default initialization
	//explicit 抑制implicitly conversions//only 1 argm??
	explicit Account(const std::string &os,double b=0.0)
	    :owner(os),balance(b),daily_tbl(){}
	//we cannot initialize with copy initialization

	void addInterest() {balance+=balance*interestRate;}
	//std::ostream &print(std::ostream &);//MF

    private:
	//data members
	std::string owner;
	double balance;
	double daily_tbl[period];

        //static members
	static double interestRate;
	static double initRate();
};

double Account::interestRate=initRate();

double Account::initRate(){return 0.1;}

constexpr int Account::period;//define static member
//define print
std::ostream &print(std::ostream &os,const Account &item)
{
    os<<item.owner<<" "<<item.balance<<"\n"
	<<item.daily_tbl[0];
    return os;
}










#endif
