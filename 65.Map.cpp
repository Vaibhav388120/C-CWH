// map<data_type_of_key, data_type_of_value> variable_name;

#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){

    //Map is an associative array
    map<string,int> marksMap;
    marksMap["Atul"]=58;
    marksMap["Rohit"]=57;
    marksMap["Kishlay"]=78;
    marksMap["Aditya"]=65;
    marksMap["Sachin"]=53;

    map<string,int> :: iterator it;
    for(it=marksMap.begin();it!=marksMap.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    return 0;

    marksMap.insert({{"Rohan",89},{"Akshat",46}});
}
