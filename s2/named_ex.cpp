#include<iostream>
using namespace std;
int reused=42;//reused has global scope
int main()
{
    int unique=0;//unique has block scope
    cout<<reused<<" "<<unique<<endl;
    int reused=0;//new,local object named reused hides global reused
    cout<<reused<<" "<<unique<<endl;
    cout<<::reused<<" "<<unique<<endl;//explicitly requests the global reused
    return 0;
}
