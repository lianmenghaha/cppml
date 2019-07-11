#include<iostream>
using namespace std;

void swap2ptr(int **pa,int **pb)
{
    int *tmp=*pa;
    *pa=*pb;
    *pb=tmp;
}

void swap2ptr(int *&pa,int *&pb)
{
    int *tmp=pa;
    pa=pb;
    pb=tmp;
}

int main()
{
    int i=1,j=2;
    cout<<"i= "<<i<<"j= "<<j<<endl;
    int *p1=&i,*p2=&j;
    //swap2ptr(&p1,&p2);
    swap2ptr(p1,p2);
    cout<<*p1<<'\t'<<*p2<<endl;
    

    return 0;
}
