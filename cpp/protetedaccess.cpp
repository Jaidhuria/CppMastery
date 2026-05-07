#include<iostream>
using namespace std;

class parent {
protected:
    int x = 100;
};
class child : public parent {

public:
    void show() {
        cout << x << endl;
    }
};
int main() {
    child c;
    c.show();
    return 0;
};