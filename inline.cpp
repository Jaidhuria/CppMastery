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
int a = 3, b; 
b = sqr(a);
cout << b;
return 0;
}