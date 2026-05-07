// two number checking equality
#include <iostream>

using namespace std;

int main()
{

  int num1;
  int num2;
  cin >> num1 >> num2;

  if (num1 == num2)
    cout << "is equal";
  if (num1 != num2)
    cout << num1 << "is not equal to" << num2;
  if (num1 < num2)
    cout << num1 << "is less than" << num2 << endl;
  if (num1 > num2)
    cout << num1 << " is greater than " << num2 << endl;
  if (num1 <= num2)
    cout << num1 << " is less than or equal to " << num2 << endl;
  if (num1 >= num2)
    cout << num1 << " is greater than or equal to " << num2 << endl;

  return 0;
}