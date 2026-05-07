#include <iostream>
using namespace std;

class A {
public:
    virtual void show() {
        cout << "Hello base class\n";
    }
};

class B : public A {
public:
    void show() override {
        cout << "Hello derive class";
    }
};

int main() {
    A aobj;  
    B bobj;  
    A *bptr; 

    bptr = &aobj;
    bptr->show();  

    bptr = &bobj;
    bptr->show(); 

    return 0;
}

#include <iostream>
using namespace std;

class A {
public:
    virtual void display() {
        cout << "Content of base class.\n";
    }
};

class B : public A {
public:
    void display() override {
        cout << "Content of derived class.\n";
    }
};

int main() {
    A *b;   
    B d;    
    b = &d; 
    b->display(); 
    return 0;
}
