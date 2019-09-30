#include<iostream>
using namespace std ;
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

class abc
{
  char name[20];
  double cgpa;
  public:
  abc()
  {
    strcpy(name,"****");
    cgpa=0.00;
  }
  abc(char name[],double p)
  {
    strcpy(this->name,name);
    this->cgpa=p;
  }
  void in()
  {
      cout<<"\nEnter name and CGPA :\n" ;
      gets(name) ;
      cin>>cgpa ;
  }
  void show()
  {
   cout<<"\n Name="<<this->name;
   cout<<"\n CGPA="<<this->cgpa;
  }
  void * operator new(size_t size)
  {
    void *p=::new abc();
    return p;
  }
  void operator delete(void *p)
  {
    delete(p);
  }
  };
  int main()
  {
  abc *p=new abc("xyz",8.00);
  p->show();
  abc *q=new abc();
  q->in() ;
  q->show() ;
  delete(p);

  }

