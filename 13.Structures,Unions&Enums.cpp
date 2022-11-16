#include<iostream>
using namespace std;

typedef struct employee{

    int eId;
    char favChar;
    float salary;

} ep;

union money{

    int rice;
    char car;
    float pounds;
};

int main(){
    enum Meal{breakfast,lunch,dinner};
    Meal m1=lunch;
    cout<<(m1==2);
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;

    // union money m1;
    // m1.rice=34;
    // m1.car='c';
    // cout<<m1.car;

    // ep vaibhav;
    // struct employee pushpendra;
    // struct employee abhishek;
    // vaibhav.eId=1;
    // vaibhav.favChar='c';
    // vaibhav.salary=400000;
    // cout<<"The value is "<<vaibhav.eId<<endl;
    // cout<<"The value is "<<vaibhav.favChar<<endl;
    // cout<<"The value is "<<vaibhav.salary<<endl;
 return 0;
}