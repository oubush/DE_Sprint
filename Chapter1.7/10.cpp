/*10. Создайте структуру с именем train, содержащую поля: название пункта назначения, номер поезда, время отправления. Ввести данные в массив из пяти элементов типа train, упорядочить элементы по номерам поездов. Добавить возможность вывода информации о поезде, номер которого введен пользователем. Добавить возможность сортировки массив по пункту назначения, причем поезда с одинаковыми пунктами назначения должны быть упорядочены по времени отправления.*/

#include <iostream>
#include <string>
using namespace std;

class Train { 
    public:
        string dest;
        int number;
        int deptime;

        // float mean_mark() {
        //     float sum = 0;
        //     for (int i=0;i<5;i++) {
        //         sum += marks[i];
        //     }
        //     return sum / 5;
        // }
};

int main()
{
  // Создать массив
  Train train[5];
  
  // Заполнить данными
  train[0].dest = "Moscow";
  train[0].number = 321;
  train[0].deptime = 19;
  
  train[1].dest = "London";
  train[1].number = 463;
  train[1].deptime = 14;
  
  train[2].dest = "Moscow";
  train[2].number = 493;
  train[2].deptime = 17;
  
  train[3].dest = "Paris";
  train[3].number = 120;
  train[3].deptime = 21;
  
  train[4].dest = "Amsterdam";
  train[4].number = 778;
  train[4].deptime = 10;
  
  // Упорядочить по возрастанию номера
  int flag;
  Train temp;
  for (int k=1;k<5;k++) {
      flag = 0;
      for (int i=0;i<5-k;i++) {
          if (train[i].number > train[i+1].number) {
              temp = train[i];
              train[i] = train[i + 1];
              train[i + 1] = temp;
              flag = 1;
          }
      }
      if (flag == 0) break;
  }
  // Вывести на экран поезда и их номера в порядке возрастания
  for (int i=0;i<5;i++) {
      cout << train[i].dest << " " << train[i].number << endl;
  }
  
  int num;
  cout << endl;
  cout << "Enter train number..";
  cin >> num;
  flag = 0;
  for (int i=0;i<5;i++){
      if (train[i].number == num){
          flag = 1;
          cout << train[i].dest << " " << train[i].number << " " << train[i].deptime << endl;
          break;
      }
  }
  if (flag ==0){
      cout << "Train with number " << num << " not known!" << endl;
  }
  
  // Упорядочить по пункту назначения
  for (int k=1;k<5;k++) {
      flag = 0;
      for (int i=0;i<5-k;i++) {
          if (train[i].dest > train[i+1].dest) {
              temp = train[i];
              train[i] = train[i + 1];
              train[i + 1] = temp;
              flag = 1;
          } else {
              if (train[i].dest == train[i+1].dest) {
                  if (train[i].deptime > train[i+1].deptime) {
                      temp = train[i];
                      train[i] = train[i + 1];
                      train[i + 1] = temp;
                      flag = 1;
                  }
              }
          }
      }
      if (flag == 0) break;
  }
  // Вывести на экран поезда и их время отправления в порядке возрастания пункта назначения
  cout << endl;
  for (int i=0;i<5;i++) {
      cout << train[i].dest << " " << train[i].deptime << endl;
  }
}