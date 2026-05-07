#include <iostream>
using namespace std;

// Pass by Value: Does not modify original variable
void passbyvalue(int x) { 
    x = 10; 
}

// Pass by Reference: Modifies original variable
void passbyreference(int &x) { 
    x = 20; 
}

// Pass by Pointer: Modifies original variable
void passbypointer(int *x) { 
    *x = 30; 
}

int main() {
    int a = 10;
    
    passbyvalue(a);
    cout << "After pass by value: " << a << endl;  // a remains 10

    passbyreference(a);
    cout << "After pass by reference: " << a << endl;  // a changes to 20

    passbypointer(&a);
    cout << "After pass by pointer: " << a << endl;  // a changes to 30

    return 0;
}
