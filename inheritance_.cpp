#include <iostream>
using namespace std;

class employee {
private:
    string name;
    int age;

public:
    employee(string n, int a) : name(n), age(a) {} // Constructor for initialization

    virtual void display() { // Virtual function to enable overriding
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class manager : public employee {
public:
    string department;

    manager(string n, int a, string d) : employee(n, a), department(d) {}

    void display() override { // Correct function override
        employee::display();
        cout << "Department: " << department << endl;
    }
};

int main() {
    manager s1("Jai", 18, "Mechanical"); // Create a manager object
    s1.display(); // Call overridden function

    return 0;
}