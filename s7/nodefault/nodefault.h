#ifndef NODEFAULT
#define NODEFAULT
class NoDefault
{
    private:
	int _i;
    public:
	NoDefault(int i): _i(i){}
};

class C
{
    private:
	NoDefault nd;
    public:
	//constructor
	C():nd(0){}
};












#endif
