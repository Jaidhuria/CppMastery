#include<iostream>
using namespace std;

void swap(int x, int y) {
  x = 30;
  y = 40;
  int z = x;
  x = y;
  y = z;
}

int main() {
  int Num1 = 10;
  int Num2 = 20;
  swap(Num1, Num2);
  cout << Num1 << " " << Num2 << endl;
  return 0;
}