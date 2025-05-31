//other example of virtual class
#include<iostream>

using namespace std;
class A{
    public:
    virtual void show(){
        cout<<"Hello base class\n";
    }
};
class B :public A {
    public :
    void show(){
        cout<<"hello derive class";
    }
};
int main(){
    A aobj;
    B bobj;
    A *bptr;
    
    bptr ->show();
    bptr = &bobj;
    bptr ->show();
}