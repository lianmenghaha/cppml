#include<iostream>
#include<string>
#include<vector>
#include"Screen.h"
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() 
{
    Screen myScreen(5,5,'X');
    myScreen.move(4,0).set('#').display(cout);
    cout<<"\n-----\n";
    myScreen.display(cout);
    cout<<"\n-----\n";
    
    //nonconst and const
    Screen myScreen2(5,3);
    const Screen blank(5,3);
    myScreen2.set('#').display(cout);//calls nonconst version
    cout<<"\n-----\n";
    blank.display(cout);//calls const version
    cout<<"\n-----\n";

    Window_mgr window;
    window.clear(0);
    
  return 0;
}

