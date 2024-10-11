#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    // Четене на цяло число
    cout << "Въведете цяло число: ";
    cin >> number;

    // Изчисляване на сумата на цифрите
    int temp = abs(number); // За да обработим отрицателни числа

    while (temp > 0) {
        sum += temp % 10;  // Извличане на последната цифра и добавяне към сумата
        temp /= 10;        // Премахване на последната цифра
    }

    // Отпечатване на резултата
    cout << "Сумата на цифрите на " << number << " е: " << sum << endl;

    return 0;
}
