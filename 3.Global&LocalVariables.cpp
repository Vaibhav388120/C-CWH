#include<iostream>
using namespace std;
//global variable
int glo=6;

void sum(){
    //local variable
    int a;
    cout<<glo<<endl;
}

int main(){
    //local variable 
    int glo=9;
    cout<<glo<<endl;
    glo=78;
    cout<<glo<<endl;
    sum();
    cout<<glo<<endl;
    return 0;
}