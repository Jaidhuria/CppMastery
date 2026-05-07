#include<iostream>
using namespace std;

class Student{
public:
    Student(){
        cout <<"Constructor"<< endl;
    }
};

int main(){
    Student s1;
    return 0;
}