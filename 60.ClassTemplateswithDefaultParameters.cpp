#include<iostream>
using namespace std;

template<class T1=int, class T2=float, class T3=char>
class Vaibhav{
    public:
    T1 a;
    T2 b;
    T3 c;
    Vaibhav(T1 x,T2 y,T3 z){
        a=x;
        b=y;
        c=z;
    }
    void display(){
       cout<<"The value of a is "<<a<<endl;
       cout<<"The value of b is "<<b<<endl;
       cout<<"The value of c is "<<c<<endl; 
    }
};

int main(){
    Vaibhav<> v(4,6.4,'c');
    v.display();
    cout<<endl;
    Vaibhav<float,char,char> g(1.6,'o','c');
    g.display();
    return 0;
}