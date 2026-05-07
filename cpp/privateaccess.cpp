#include<iostream>
using namespace std;

class Student {
private:
    int marks;
public:
    void setMarks(int m) {
        marks = m;
    }
    int getMarks() {
        return marks;
    }
};
int main() {
    Student s1;
    s1.setMarks(95);
    cout<< s1.getMarks();
    return 0;
} 