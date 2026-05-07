#include <iostream>
using namespace std;

class animal{
public:
    void eat(){
        cout << "eating" << endl;
    }
};

int main(){
    animal a;
    a.eat();
    return 0;
}
