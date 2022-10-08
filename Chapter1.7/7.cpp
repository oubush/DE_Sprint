/* Задача на цикл while

7. Написать программу, которая выводит таблицу значений функции y=-2 * x^2 - 5 * x - 8 в диапазоне от –4 до +4, с шагом 0,5 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
  double x = -4, y;
  int n, s = -1;
  cout << "x" << setw(10) << "y" << endl;
  while (x <= 4) {
      y= -2 * pow(x, 2) - 5 * x - 8;
      s = -1 * s;
      n = x < 0 ? 9 + s : 10 + s; 
      cout << x << setw(n) << y << endl;
      x += 0.5;
  }
}