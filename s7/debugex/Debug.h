#ifndef DEBUG
#define DEBUG
#include<iostream>
class Debug
{
    friend std::ostream &print(std::ostream &,const Debug &);
    public:
	//constructor
	constexpr Debug(bool b=true):
	    hw(b),io(b),other(b){}
	constexpr Debug(bool h,bool i,bool o):
	    hw(h),io(i),other(o){}

	//MF
	constexpr bool any() const {return hw||io||other;}
	void set_io(bool b){io=b;}
	void set_hw(bool b){hw=b;}
	void set_other(bool b){other=b;}


    private:
	bool hw;//hardware errors other than IO errors
	bool io;//IO errors
	bool other;//other errors
};
//Define print function
std::ostream &print(std::ostream &os,const Debug &item)
{
    os<<item.hw<<item.io<<item.other<<std::endl;
    return os;
}










#endif
