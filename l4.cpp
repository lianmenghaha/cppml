/*
	random
	string
	argc, argv
	file
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<fstream>
using namespace std;
int main(int argc, char** argv)
{
	srand(time(NULL));
	int randresult;
	for(int i=0;i<10;i++)
	{
		randresult=rand()%100+1;
		cout<<randresult<<endl;
	}
	string str1="test1";
	string str2=" test2";
	string strfin, strfin2, strfin3;
	strfin+=str1;
	strfin+=" is ";
	strfin+=str2;
	cout<<strfin<<endl;
	strfin2+=str1.substr(0,3);
	strfin2+=" is ";
	strfin2+=str2.substr(3,2);
	cout<<strfin2<<endl;
	if(strfin.compare(strfin2)==0)
		cout<<"same"<<endl;
	else
		cout<<"different"<<endl;
	// suppose argv[2] is int and argv[1] is string (char*)
	strfin3+=argv[1];
	if(atoi(argv[2])==1)
		strfin3+=" cool";	
	else
		strfin3+=" !!";	
	cout<<strfin3<<endl;
	fstream WriteFile;
	WriteFile.open("l4_outfile.txt",fstream::out);
	WriteFile<<strfin3<<endl;
	WriteFile.close();
}
