#include <bits/stdc++.h>
using namespace std;
 
class a
{
	public:
	   int x;
       a(){
           x=6;
           cout<<"a"<<endl;
       }

      virtual void method1(){
           cout<<"this is a constructor";
       }
};


 
class b: virtual public a
{
	public: b(int i){
        x=i;
    } b(){ x=9;
            cout<<"b"<<endl;
    }void method1(){
           cout<<"this is b constructor";
       }
	    
};
class c: virtual public a{

public:  c(int i){
        x=i;
    } c(){ x=3;
cout<<"c"<<endl;
    }
    void method1(){
           cout<<"this is c constructor";
       }

};
class d:public b,public c{
public:d(){
    // x=8;
    cout<<"d'"<<endl;
}void method1(){
           cout<<"this is d constructor";
       }
};
 
int main(void)
{   
a *p=new d();
p->method1(); // without making "a" class function virtual it will print a class fucntion if u make it virtual only then it will print d class.

// d b1;   //demonstrate diamond problem.
// cout<<b1.x;

}