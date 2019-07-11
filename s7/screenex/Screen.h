#ifndef SCREEN
#define SCREEN

#include<iostream>
#include<string>
#include<vector>
class Screen;

class Window_mgr
{
    public:
	using ScreenIndex=std::vector<Screen>::size_type;
	void clear(ScreenIndex);
	Window_mgr();

    private:
	std::vector<Screen> screens;//{Screen(24,80,' ')};
};




class Screen
{
    friend void Window_mgr::clear(ScreenIndex);
    public:
	typedef std::string::size_type pos;
	typedef char contents_type;
	//constructor
	Screen()=default;
	//cursor use in-class initializer
	Screen(pos ht,pos wd,char c):
	    height(ht),width(wd),contents(ht*wd,c){}//contents is a string of ht*wd elems with 'c'
	Screen(pos ht,pos wd):
	    height(ht),width(wd),contents(ht*wd,'*'){}
	//MF
	const contents_type &get() const{return contents[cursor];}
	contents_type &get(){return contents[cursor];}
	//contents_type get() const {return contents[cursor];}


        const contents_type &get(pos r,pos c)const;
	contents_type &get(pos r,pos c);
	//contents_type get(pos r,pos c)const{return contents[r*width+c];}
        //MF move
	Screen &move(pos r,pos c);
	//MF set,
	Screen &set(contents_type);
	Screen &set(pos,pos,contents_type);
	//MF display
	Screen &display(std::ostream &os)
	{
	    do_display(os);
	    return *this;
	}
	const Screen &display(std::ostream &os)const
	{
	    do_display(os);
	    return *this;
	}




    private:
	    pos cursor=0;
	    pos height=0,width=0;
	    std::string contents;
	    //MF do_display
	    void do_display(std::ostream &os)const
	    {
		//os<<contents;
		for(pos i=0;i!=contents.size();++i)
		{
		    os<<contents[i];
		    if((i+1)%width==0&&i+1!=contents.size())
			os<<"\n";
		}
	    }

};
//MF move
inline
Screen &Screen::move(pos r,pos c)
{
    pos row=r*width;
    cursor=row+c;
    return *this;
}
//MF get(pos,pos)
inline
Screen::contents_type &Screen::get(pos r,pos c)
{
    return contents[r*width+c];
}
//MF get(pos,pos)const
inline
const Screen::contents_type &Screen::get(pos r,pos c)const
{
    return contents[r*width+c];
}
//MF set(contents_type)
inline
Screen &Screen::set(contents_type c)
{
    contents[cursor]=c;
    return *this;
}
//MF set(pos,pos,char)
Screen &Screen::set(pos r,pos col,contents_type ch)
{
    contents[r*width+col]=ch;
    return *this;
}
//Window_mgr constructor
Window_mgr::Window_mgr() : screens{Screen(24, 80)} {}
//Window_mgr MF clear definition
void Window_mgr::clear(ScreenIndex i)
{
    Screen &s=screens[i];
    s.contents=std::string(s.height*s.width,' ');
}




#endif
