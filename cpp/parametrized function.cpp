#include<iostream>
using namespace std;

int add(int a , int b){
    return a+b;
}
int main(){
    int a = 10;
    int b = 20;
    cout<<"The sum of a and b is "<<add(a,b)<<endl;
}