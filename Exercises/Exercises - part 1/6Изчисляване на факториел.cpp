#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1; // За по-големи стойности на факториела

    // Четене на цяло число
    cout << "Въведете цяло число: ";
    cin >> n;

    // Проверка дали числото е отрицателно
    if (n < 0) {
        cout << "Факториелът не е дефиниран за отрицателни числа." << endl;
    }
    else {
        // Изчисляване на факториела
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }

        // Отпечатване на резултата
        cout << "Факториелът на " << n << " е " << factorial << endl;
    }

    return 0;
}
