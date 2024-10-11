#include <iostream>
#include <cmath> // За sqrt()
using namespace std;

int main() {
    double number;

    // Четене на реално число
    cout << "Въведете реално число: ";
    cin >> number;

    // Проверка за неотрицателно число
    if (number < 0) {
        cout << "Квадратният корен не е дефиниран за отрицателни числа." << endl;
    } else {
        // Изчисляване на квадратния корен
        double squareRoot = sqrt(number);

        // Отпечатване на резултата
        cout << "Квадратният корен на " << number << " е: " << squareRoot << endl;
    }

    return 0;
}
