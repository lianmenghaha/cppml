#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector<int> iv{1,2,3,4,5,6,7,8,9};
    int ia[10];
    int *bg=ia;
    int *ed=ia+iv.size();
    for(const auto &i:iv)
    {
	*bg=i;
	bg++;
    }

    for(bg=ia;bg!=ed;++bg)
	cout<<*bg<<endl;
    cout<<endl;

    return 0;
}
