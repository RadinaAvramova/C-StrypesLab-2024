#include <iostream>
#include <iomanip> // За std::setprecision
using namespace std;

int main() {
    double num1, num2, num3;

    // Четене на три реални числа
    cout << "Въведете първото число: ";
    cin >> num1;
    cout << "Въведете второто число: ";
    cin >> num2;
    cout << "Въведете третото число: ";
    cin >> num3;

    // Изчисляване на средната стойност
    double average = (num1 + num2 + num3) / 3;

    // Изчисляване на отклонението за всяко число
    double deviation1 = num1 - average;
    double deviation2 = num2 - average;
    double deviation3 = num3 - average;

    // Отпечатване на резултата
    cout << fixed << setprecision(2); // Задаване на форматиране на числата
    cout << "Средната стойност е: " << average << endl;
    cout << "Отклонение на " << num1 << " от средната стойност: " << deviation1 << endl;
    cout << "Отклонение на " << num2 << " от средната стойност: " << deviation2 << endl;
    cout << "Отклонение на " << num3 << " от средната стойност: " << deviation3 << endl;

    return 0;
}
