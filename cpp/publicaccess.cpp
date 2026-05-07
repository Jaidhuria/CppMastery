#include<iostream>
using namespace std;

class a{
    public:
    void display(){
        cout<<"This is a public access specifier"<<endl;
    }
};
int main(){
    a obj;
    obj.display();
    return 0;
}