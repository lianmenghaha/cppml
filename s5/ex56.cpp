#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    const vector<string> scores = { "F", "D", "C", "B", "A", "A++"};
    string lettergrade;
    int grade;
    cout<<"Please enter the grade!"<<endl;
    cin >> grade;
    lettergrade=(grade>=60)? scores[(grade-50)/10]:scores[0];
    cout<<"The lettergrade is:\n"
	<<lettergrade<<endl;

  return 0;
}
