// Derived Class syntax
// class {{derived-class-name}}: {{visibility-mode}} {{base-class-name}}{
//     class members/methods/etc..
// }

#include<iostream>
using namespace std;

//Base class
class Employee{
    public:
    int id;
    float salary;
    Employee(int inpId){
        id=inpId;
        salary=34.0;
    }
    Employee(){}

};

//Creating a Programmer class derived from Employee Base class
class Programmer: public Employee{
    public:
    int languageCode;
    Programmer(int inpId){
        id=inpId;
        languageCode=9;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main(){
    Employee vaibhav(1),rohan(2);
    cout<<vaibhav.salary<<endl;
    cout<<rohan.salary<<endl;
    Programmer skillF(10);
    cout<<skillF.languageCode<<endl;
    cout<<skillF.id<<endl;
    // cout<<skillF.salary<<endl;  //will return garbage value
    skillF.getData();
    return 0;
}