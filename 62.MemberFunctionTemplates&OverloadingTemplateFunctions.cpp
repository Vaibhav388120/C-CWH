#include<iostream>
using namespace std;

template<class T>
class Vaibhav{
    public:
    T data;
    Vaibhav(T a){
        data=a;
    }
    void display(){
        cout<<data;
    }
};

template<class T>
class Vaibhav{
    public:
    T data;
    Vaibhav(T a){
        data=a;
    }
    void display();
};

template<class T>
void Vaibhav<T>:: display(){
    cout<<data;
}

int main(){
    Vaibhav<int> v(5.7);
    cout<<v.data<<endl;
    v.display();
    return 0;
}


#include<iostream>
using namespace std;

void func(int a){
    cout<<"I am first func()"<<a<<endl;
}

template<class T>
void func(T a){
    cout<<"I am templatised func()"<<a<<endl;
}

int main(){
    func(4);  //Exact match takes the highest priority
    return 0;
}