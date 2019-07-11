#include<iostream>
#include<string>

using namespace std;
int main()
{
    unsigned grade;
    string finalgrade;
    cout<<"Please enter the grade"<<endl;
    cin>>grade;
    cout<<"Version 1:"<<endl;
    finalgrade=(grade>90)?"high pass"
	:(75>=grade && grade>60)?"low pass"
	:(grade<60)?"fail":"pass";
    cout<<"The final grade is:"<<endl;
    cout<<finalgrade<<endl;
    
    cout<<"Version 2"<<endl;
    string fg2;
    if(grade<60)
	fg2="fail";
    if(grade>=60&&grade<=75)
	fg2="low pass";
    if(grade>75&&grade<=90)
	fg2="pass";
    if(grade>90)
	fg2="high pass";
    cout<<"The final grade is:"<<endl;
    cout<<fg2<<endl;
    return 0;
}
