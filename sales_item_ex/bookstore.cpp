#include<iostream>
#include"Sales_item.h"
using namespace std;
//We need to read a file of sales transactions and produce a report that shows, for each book, the total number of copies sold, the total revenue, and the average sales price.
int main()
{
    Sales_item total;
    if(cin>>total)
    {
	Sales_item trans;//variable to hold the running sum
	while(cin>>trans)
	{
	    if(total.isbn()==trans.isbn())
		total+=trans;//update the running total
	    else{ 
		cout<<total<<endl;
		total=trans;//total now refers to the next book
	    }
	}
	cout<<total<<endl;//print the last transaction
    }else{
	//no input! warn the user
	cerr<<"No data?!"<<endl;
	return -1;
    } 
    return 0;

}
