#include <iostream>
using namespace std;
main()
{
  int number1, number2, number3;
  cout << "Enter Number1: ";
  cin >> number1;
  cout << "Enter Number2: ";
  cin >> number2;
  cout << "Enter Number3: ";
  cin >> number3;

  if( (number1 > number2 ) && ( number1 > number3))
  {
    cout << number1 << " is largest";
  }
  if ((number2 > number1 ) && (number2 > number3))
  {
    cout << number2;
  }
  if ((number3 > number1) && (number3 > number2))

  {
    cout << number3;
  }
}