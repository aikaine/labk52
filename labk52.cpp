#include "Header.h"




int main() {
    setlocale(LC_ALL, "ru");
    int n;
     cout << "Введите количество студентов: ";
     cin >> n;

     vector<Student> students(n);
    for (int i = 0; i < n; i++) {
         cout << "Студент " << i + 1 << ":" <<  endl;
         cout << "Фамилия: ";
         cin >> students[i].name;
         cout << "Группа: ";
         cin >> students[i].group;
         cout << "Средний балл: ";
         cin >> students[i].averageGrade;
         cout << "Доход на члена семьи: ";
         cin >> students[i].familyIncome;
    }

     sort(students.begin(), students.end(), compareStudents);

     cout << "Очередность предоставления мест в общежитии:" <<  endl;
    for (int i = 0; i < n; i++) {
         cout << i + 1 << ". " << students[i].name << " из группы " << students[i].group <<  endl;
    }

    return 0;
}