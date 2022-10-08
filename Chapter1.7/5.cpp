/* Задача на цикл for!

5. Написать программу, которая выводит таблицу квадратов десяти первых положительных чисел.*/

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
  int i;
  cout << "Number " << "Squared" << endl;
  for (i=1;i<=10;i++) {
      cout << i << setw(7) << i*i << endl;
  }

}