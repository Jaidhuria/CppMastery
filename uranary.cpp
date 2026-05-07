

#include <iostream>
using namespace std;

class example {
    int a, b;

public:
    void input() {
        cout << "Enter a and b: ";
        cin >> a >> b;
    }

    // Overloading unary minus (-)
    void operator-() {
        a = -a;
        b = -b;
    }

    void display() {
        cout << "a=" << a << ", b=" << b << endl;
    }
};

int main() {
    example e;
    
    e.input(); // Get values from user
    
    cout << "Before overloading unary minus operator:" << endl;
    e.display();

    -e; // Calls overloaded unary minus

    cout << "After overloading unary minus operator:" << endl;
    e.display();

    return 0;
}
