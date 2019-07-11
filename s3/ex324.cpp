#include<iostream>
#include<vector>
using namespace std;
//Print the sum of each pair of adjacent elements
void sum_adjacent(const vector<int> &v)
{
    if(v.size()<2)
	return;
    for(auto it=v.cbegin();it!=v.cend()-1;++it)
	cout<<*it+*(it+1)<<"\t";
    cout<<endl;
}

//Print the sum of the first and last elements,followed by the sum of second and second-to-last,and so on
void sum_symmetric(const vector<int> &v)
{
    //for 0,1,2,3,4:mid denote 3
    //for 0,1,2,3: mid denote 2
    auto mid =v.cbegin()+(v.cend()-v.cbegin()+1)/2;
    for(auto it=v.cbegin();it!=mid;++it)
	cout<<*it+*(v.cend()-1-(it-v.cbegin()))<<'\t';
    cout<<endl;
}

int main()
{
    vector<int> iv;
    int i;
    while(cin>>i)
	iv.push_back(i);

   sum_adjacent(iv);
   sum_symmetric(iv);

   return 0;
}
