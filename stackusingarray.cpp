#include <iostream>
using namespace std;
int stack[100], n = 100, top = -1;
void push(int val)
{
    if (top >= n - 1)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        top++;
        stack[top] = val;
        cout << "Pushed " << val << " onto stack." << endl;
    }
}
void pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {
        cout << "Popped " << stack[top] << " from stack." << endl;
        top--;
    }
}
void display()
{
    if (top >= 0)
    {
        cout << "stack elements are: ";
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Stack is empty." << endl;
    }
}
int main()
{
    int choice, value;
    do
    {
        cout << "1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 4);

    return 0;
}