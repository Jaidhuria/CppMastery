//Reference
#include<iostream>
using namespace std;
int main(){

    int i = 10;
    int*p = &i;
    int**pt = &p;
    int***ptr = &pt;
    cout << "i=" << i << "\t" << "p=" << p << "\t"

<< "pt=" << pt << "\t" << "ptr=" << ptr << "\n";

}