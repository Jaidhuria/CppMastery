#include<iostream>
using namespace std;

int main() {

    int i=10;
    
    int *p=&i; 
    int **pt=&p;
    int ***ptr=&pt;
    
    
    cout<< "i=" << i << "\t" << "p=" << p << "\t"
    << "pt=" << pt << "\t" << "ptr=" << ptr << "\n";
    int a=5; 
    
    int &S=a;
    
    int &S0=S;
    
    int &S1=S0;
    
    cout << "a=" << a << "\t" << "S=" << S <<"\t" <<
     "S0=" << S0 << "\t" << "S1="
    << S1 << "\n";

    }