/* 3. Написать программу решения квадратного уравнения. Программа должна проверять правильность исходных данных и в случае, если коэффициент при второй степени неизвестного равен нулю, выводить соответствующее сообщение.*/

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
  double a, b, c, D, x1, x2;
  cout << "Assume a*x^2 + b*x + c = 0" << endl;
  cout << "Enter a.. ";
  cin >> a;
  while (a == 0) {
      cout << "a cannot be 0!" << endl;
      cout << "Enter a.. ";
      cin >> a;
  }
  cout << "Enter b.. ";
  cin >> b;
  cout << "Enter c.. ";
  cin >> c;
  
  D = pow(b, 2) - 4*a*c;
  
  if (D < 0) {cout << "No roots!";}
  else {
      if (D == 0) {
          x1 = - b / (2*a);
          cout << "One root: " << x1;
      } 
      else {
          x1 = (- b - pow(D, 0.5)) / (2*a);
          x2 = (- b + pow(D, 0.5)) / (2*a);
          cout << "Two roots: " << x1 << " and " << x2;
      }
  }
}
