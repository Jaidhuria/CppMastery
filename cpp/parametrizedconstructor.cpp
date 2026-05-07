#include<iostream>
using namespace std;
class A{
    public:
    A(int a , int b){
        cout<<"The sum is : "<<a+b<<endl;
    }
};
int main(){
    A obj = A(10,20);
    return 0;
};