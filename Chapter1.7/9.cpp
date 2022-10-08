/*9. Создайте структуру с именем student, содержащую поля: фамилия и инициалы, номер группы, успеваемость (массив из пяти элементов). Создать массив из десяти элементов такого типа, упорядочить записи по возрастанию среднего балла. Добавить возможность вывода фамилий и номеров групп студентов, имеющих оценки, равные только 4 или 5.*/

#include <iostream>
#include <string>
using namespace std;

class Student { 
    public:
        string surname;
        string initials;
        int group_number;
        int marks[5];
        float mean_mark() {
            float sum = 0;
            for (int i=0;i<5;i++) {
                sum += marks[i];
            }
            return sum / 5;
        }
};

int main()
{
  // Создать массив
  Student students[10];
  
  // Заполнить данными
  students[0].surname = "Smith";
  students[0].initials = "J.S.";
  students[0].group_number = 12;
  students[0].marks[0] = 3;
  students[0].marks[1] = 4;
  students[0].marks[2] = 5;
  students[0].marks[3] = 4;
  students[0].marks[4] = 4;

  students[1].surname = "Golden";
  students[1].initials = "K.V.";
  students[1].group_number = 10;
  students[1].marks[0] = 4;
  students[1].marks[1] = 4;
  students[1].marks[2] = 3;
  students[1].marks[3] = 3;
  students[1].marks[4] = 4;

  students[2].surname = "Adams";
  students[2].initials = "C.V.";
  students[2].group_number = 12;
  students[2].marks[0] = 4;
  students[2].marks[1] = 5;
  students[2].marks[2] = 5;
  students[2].marks[3] = 4;
  students[2].marks[4] = 3;
  
  students[3].surname = "Wilson";
  students[3].initials = "F.D.S";
  students[3].group_number = 10;
  students[3].marks[0] = 3;
  students[3].marks[1] = 3;
  students[3].marks[2] = 3;
  students[3].marks[3] = 3;
  students[3].marks[4] = 2;
  
  students[4].surname = "Burton";
  students[4].initials = "P.N.";
  students[4].group_number = 12;
  students[4].marks[0] = 5;
  students[4].marks[1] = 5;
  students[4].marks[2] = 5;
  students[4].marks[3] = 5;
  students[4].marks[4] = 5;
  
  students[5].surname = "Harris";
  students[5].initials = "Q.V.";
  students[5].group_number = 10;
  students[5].marks[0] = 5;
  students[5].marks[1] = 5;
  students[5].marks[2] = 5;
  students[5].marks[3] = 4;
  students[5].marks[4] = 4;
  
  students[6].surname = "Stevens";
  students[6].initials = "E.R.";
  students[6].group_number = 12;
  students[6].marks[0] = 3;
  students[6].marks[1] = 3;
  students[6].marks[2] = 3;
  students[6].marks[3] = 4;
  students[6].marks[4] = 4;
  
  students[7].surname = "Robinson";
  students[7].initials = "J.E.";
  students[7].group_number = 10;
  students[7].marks[0] = 3;
  students[7].marks[1] = 4;
  students[7].marks[2] = 3;
  students[7].marks[3] = 4;
  students[7].marks[4] = 4;
  
  students[8].surname = "Lewis";
  students[8].initials = "Y.S.";
  students[8].group_number = 12;
  students[8].marks[0] = 5;
  students[8].marks[1] = 5;
  students[8].marks[2] = 5;
  students[8].marks[3] = 3;
  students[8].marks[4] = 2;

  students[9].surname = "Walker";
  students[9].initials = "O.S.";
  students[9].group_number = 10;
  students[9].marks[0] = 3;
  students[9].marks[1] = 2;
  students[9].marks[2] = 3;
  students[9].marks[3] = 2;
  students[9].marks[4] = 5;
  
  // Упорядочить по возрастанию среднего балла
  int flag;
  Student temp;
  for (int k=1;k<10;k++) {
      flag = 0;
      for (int i=0;i<10-k;i++) {
          if (students[i].mean_mark() > students[i+1].mean_mark()) {
              temp = students[i];
              students[i] = students[i + 1];
              students[i + 1] = temp;
              flag = 1;
          }
      }
      if (flag == 0) break;
  }
  // Вывести на экран всех студентов и средние оценки в порядке возрастания
  for (int i=0;i<10;i++) {
      cout << students[i].surname << " " << students[i].initials << " "  << students[i].mean_mark() << endl;
  }
  
  // Вывести на экран фамилии и номера групп студентов с оценкаим только 4 или 5
  cout << endl;
  for (int i=0;i<10;i++) {
      flag = 1;
      for (int j=0;j<5;j++) {
          if (students[i].marks[j] < 4) {
              flag = 0;
              break;
          }
      }
      if (flag == 1) {
          cout << students[i].surname << " " << students[i].group_number << endl;
      }
  }  
  
}