#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out;
    out.open("sample60.txt");

    out<<"This is me\n";
    out<<"This is also me";
    out.close();
    return 0;
}


#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main(){
    ifstream in;
    string st;
    in.open("sample.txt");

    //giving output the string lines by storing in st until the file reaches the end of it

    while(in.eof()==0){
        getline(in,st);
        cout<<st<<endl;
    }
    return 0;

}