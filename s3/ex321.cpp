#include<iostream>
#include<vector>
#include<string>
using namespace std;

void print_vector_int(const vector<int> &v){
    for(auto it=v.cbegin();it!=v.cend();++it)
	cout<<*it<<"\t";
    cout<<endl;


}
void print_vector_string(const vector<string> &v){
    for(auto it=v.cbegin();it!=v.cend();++it)
	cout<<*it<<"\t";
    cout<<endl;
}


int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10,42);
    vector<int> v4{10};
    vector<int> v5{10,42};
    //vector<string> V6{10};
    vector<string> v7{10,"hi"};

    print_vector_int(v1);
    print_vector_int(v2);
    print_vector_int(v3);
    print_vector_int(v4);
    print_vector_int(v5);
    //print_vector_string(v6);
    print_vector_string(v7);
    return 0;
}
