#include <iostream>
using namespace std;

class Student
{

public:
    string name;

    Student(string n)
    {
        name = n;
    }
    Student(Student &s)
    {
        name = s.name;
    }

    void display()
    {
        cout << name << endl;
    }
};

int main()
{
    Student s1("abc");
    Student s2(s1);
    s1.display();
    s2.display();
    return 0;
}