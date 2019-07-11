#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    unsigned grade;
    string lettergrade;
    vector<string> scores={"F","D","C","B","A"};
    cout<<"Enter the grade"<<endl;
    cin>>grade;
    if(grade<60)
	lettergrade=scores[0];
    else{
	lettergrade=scores[(grade-50)/10];
	if(grade!=100){
	    if(grade%10>7)
		lettergrade+='+';
	    else if(grade%10<3)
		lettergrade+='-';
	}
    }
    cout<<lettergrade<<endl;
    return 0;
}
