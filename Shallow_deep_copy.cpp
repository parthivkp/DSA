#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

class test{
    public:
int *ptr;
test(const test &t){
        ptr=new int(*(t.ptr));
}
test(){}

};



int main(){
    test t1;
     // copy constructor is called so it will print 6 and 78 or else it will print 78 only
    t1.ptr=new int(6);
    test t2=t1; 
    *t2.ptr=178;
    
    cout<<*t1.ptr<<" "<<*t2.ptr;
    return 0;
}