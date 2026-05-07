#include <iostream>
using namespace std;
int add(int x, int y)
{
    return x + y;
}
int add(int x, int y, int z)
{
    return x + y + z;
}
int main()
{
    int num1 = add(3, 7);
    int num2 = add(1, 2, 3);
    cout << num1 << "\n";
    cout << num2;
    return 0;
}