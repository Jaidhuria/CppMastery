#include<iostream>
using namespace std;
int main(){
    string a = "j";
    string * b;
    b = &a;
    cout<<*b<<endl;
    cout<<b<<endl;
}