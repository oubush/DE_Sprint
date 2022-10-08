/* 4. Проверить на чётность введённое с клавиатуры число */

#include <iostream>
using namespace std;


int main()
{
  int a;
  cout << "Enter a.. ";
  cin >> a;
  if (a % 2 == 0) {cout << "Number " << a << " is even!";}
  else {cout << "Number " << a << " is odd!";}
}
