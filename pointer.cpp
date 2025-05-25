#include<iostream>
using namespace std;
int main(){
int x = 10;

int&ref=x;
ref = 30;

cout<<"x=:"<<x<<endl;
x = 40;  
cout<<"ref =:"<<ref<<endl;
return 0;

}