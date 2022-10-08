/* 1. Написать программу, которая сравнивает два введённых с клавиатуры числа. Программа должна указать, какое число больше или, если числа равны, вывести соответствующее сообщение.*/

#include <iostream>
using namespace std;

int main()
{
  float a, b, max;
  
  cout << "Enter first number.. ";
  cin >> a;
  cout << "Enter second number.. ";
  cin >> b;
  if (a == b) {
     cout << "Numbers are equal!\n";
  } else { if (a > b) {max = a;} else {max = b;}
     cout << "Number " << max << " is greater!\n"; 
         }
}