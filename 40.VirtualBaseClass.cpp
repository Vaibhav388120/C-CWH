#include<iostream>
using namespace std;
class A{
    public:
    void say(){
        cout<<"Hello World"<<endl;
    }
};
class B: virtual public A{
};
class C: public virtual A{
};
class D:public B,public C{
};
