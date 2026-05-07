//swaping of two numbers
#include<iostream>
using namespace std;

void swap(int &x , int &y){
    int temp = x;
    x = y;
    y = temp;
    
}
int main(){
    int a = 2,b=3;
    swap(a,b);
    cout<<a<<" "<<b;
    return 0 ;
}