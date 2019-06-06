/*
	useful libs: vector, set, map
*/
#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;
int main()
{
	// size, push_back, insert, begin
/*	vector<int> vec1;
	cout<<vec1.size()<<endl;
	vec1.push_back(17);
	vec1.push_back(23);
	for(int i=0;i<10;i++)
		vec1.push_back(i);
	vec1.insert(vec1.begin()+9,999);
	for(int i=0;i<vec1.size();i++)
		cout<<vec1[i]<<endl;
	cout<<vec1.size()<<endl;*/
/*	set<int> set1;
	set1.insert(17);
	set1.insert(99);
	set1.insert(1);
	set1.insert(17);
	for(set<int>::iterator setit=set1.begin();setit!=set1.end();setit++)
		cout<<*setit<<endl;
	int d;
	cin>>d;
	if(set1.find(d)==set1.end())
		cout<<"Cannot find it."<<endl;
	else
		cout<<"Find it."<<endl;*/
	map<char,float> map1;
//	bending_point bp;
//	map<pair<int,int>, bending_point> map2;
//	map2[make_pair(1,1)]=bp;
	map1['A']=1.3;
	map1['B']=2.7;
	map1['A']=1.6;
	for(map<char,float>::iterator mapit=map1.begin();mapit!=map1.end();mapit++)
	{
		cout<<(*mapit).first<<" "<<(*mapit).second<<endl;
	//	cout<<*mapit<<endl;
	}
	cout<<map1.size()<<" "<<map1['B']<<endl;
}
