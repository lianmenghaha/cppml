#include<iostream>
using namespace std;
int main()
{
    cout<<"a really, really long string literal\n"
	"that spans two lines"<<endl;
    cout<<'\n';//prints a newline
    cout<<"\tHi!\n";
    cout<<"Hi \x4dO\115!\n";
    cout<<'\115'<<'\n';
    return 0;
}
