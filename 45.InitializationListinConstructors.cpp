/*
Syntax for initialization list in constructor:
constructor(argument-list): initilization-section{
    assignment+ other code;
}
*/

#include<iostream>
using namespace std;

class Test{
    int a;
    int b;

    public:
    Test(int i, int j):a(i),b(j){
        cout<<"Constructor executed"<<endl;
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
    }
};

int main(){
    Test t(4,6);
    return 0;
}

// Test(int i, int j):b(j),a(i+b);  //Invalid as a is initialized first

// Test(int i,int j):a(i),b(a+j) //It is valid