/* Задача на функции С++

8. Необходимо создать двумерный массив 5 х 5. Далее написать функцию, которая заполнит его случайными числами от 30 до 60. Создать еще две функции, которые находят максимальный и минимальный элементы этого двумерного массива.*/

#include <iostream>
#include<cstdlib>
using namespace std;

int fill_random() { 
    return 30 + rand() % 31;;
}

int max_number(int a[5][5]) {
    int max = 30;
    for(int i=0; i<=4; i++) {
      for(int j=0; j<=4; j++) {
          max = max >= a[i][j] ? max : a[i][j];
      }
  }
  return max;
}

int min_number(int a[5][5]) {
    int min = 60;
    for(int i=0; i<=4; i++) {
      for(int j=0; j<=4; j++) {
          min = min <= a[i][j] ? min : a[i][j];
      }
  }
  return min;
}

int main()
{
  int a[5][5];
  srand((unsigned) time(NULL));
  for(int i=0; i<=4; i++) {
      for(int j=0; j<=4; j++) {
          a[i][j] = fill_random();
      }
  }
  for(int i=0; i<=4; i++) {
    for(int j=0; j<=4; j++) {
        cout << i << " " << j << " " << a[i][j] << endl;
    }
  }
  cout << "Max number is " << max_number(a) << endl;
  cout << "Min number is " << min_number(a) << endl;
}