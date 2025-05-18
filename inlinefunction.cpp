//inline function

#include<iostream>
using namespace std;
int sum(int a , int b){

    return a+b;
}
void print_sum(){
    int r = sum(5,6);
    cout<<r;
}
int main() {
    print_sum();
    return 0;
}
