#include <iostream>
using namespace std;

// Функция за преобразуване на дата в общ брой дни
int dateToDays(int day, int month, int year) {
    return (year * 365) + (month * 30) + day;
}

int main() {
    int day1, month1, year1;
    int day2, month2, year2;

    // Четене на първата дата
    cout << "Въведете първата дата (ден месец година): ";
    cin >> day1 >> month1 >> year1;

    // Четене на втората дата
    cout << "Въведете втората дата (ден месец година): ";
    cin >> day2 >> month2 >> year2;

    // Преобразуване на двете дати в дни
    int totalDays1 = dateToDays(day1, month1, year1);
    int totalDays2 = dateToDays(day2, month2, year2);

    // Изчисляване на разликата в дни
    int difference = abs(totalDays1 - totalDays2);

    // Отпечатване на резултата
    cout << "Разликата между двете дати в дни е: " << difference << " дни." << endl;

    return 0;
}
