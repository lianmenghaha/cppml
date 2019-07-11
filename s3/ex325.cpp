#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<unsigned> score(11,0);
    unsigned grade;
    while(cin>>grade)
	++*(score.begin()+grade/10);
    for(const auto &elem : score)
	cout<<elem<<" ";
    cout<<endl;
    return 0;
}
