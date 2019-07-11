//Write a recursive function to print the contents of a vector
#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
void print(const std::vector<int>::iterator beg,
	const std::vector<int>::iterator end)
{
    if(beg==end)
	return;
    cout<<*beg<<'\t';
    print(beg+1,end);
}
int main()
{
    std::vector<int> vi;
    int i;
    char c;
    while((cin>>i).get(c))
    {
	vi.push_back(i);
	if(c=='\n')
	    break;
    }
    print(vi.begin(),vi.end());
    cout<<endl;
    return 0;
}
