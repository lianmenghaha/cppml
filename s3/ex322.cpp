#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    vector<string> text;
    string line;
    //read Input a line at a time until end-of-file
    while(getline(cin,line))
	//put a line at a time to text
	    text.push_back(line);

    //print each line in text up to the first blank line
    // here it refers to a line
    for(auto it=text.cbegin();
	    it!=text.cend()&&!it->empty();
	    ++it)
	cout<<*it<<endl;//only print the line before first blank line

    //itt refers to a line
    //we search each line in text up tu the first blank line,
    for(auto itt=text.begin();
	    itt!=text.cend()&&!itt->empty();
	    ++itt)
	//we change every line in text to uppercase
	for(auto &c:*itt)
	    c=toupper(c);//only change the line before first blank line

    // we print every line in text,if the line is empty,we print newline,els we print this element with a space
    for(auto&elem:text)
	if(elem.empty())
	    cout<<endl<<endl;
	else
	    cout<<elem<<" ";//print all things in text
    cout<<endl;

    return 0;
}
