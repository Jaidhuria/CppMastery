#include <iostream>
using namespace std;
inline int sqr (int x)
{
int y;
y = x * x;
return y;
}


int main()
{
int a = 3, b; // declaration of variables
b = sqr(a); // function call
cout << b;
return 0;
}