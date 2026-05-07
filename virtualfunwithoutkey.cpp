//virtual functions without virtual keyword
#include<iostream>
using namespace std;
class A{
    public: void display(){
        cout<<"content of base class.\n";
    }
};
class B :public A{
public :void display(){
    cout<<"content of derived class.\n";
}
};
int main(){
    A*b;
    B d;
    b = &d;
    b ->display();
    return 0;
}
