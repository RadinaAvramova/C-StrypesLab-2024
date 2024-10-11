#include <iostream>
using namespace std;

int main() {
    // Четене на цяло число
    int number;
    cout << "Въведете цяло число: ";
    cin >> number;

    // Обработка на числото, за да го обърнем
    int reversed = 0;
    int original = number;

    while (number != 0) {
        int digit = number % 10;     // Вземаме последната цифра
        reversed = reversed * 10 + digit;  // Добавяме цифрата към новото число
        number /= 10;  // Премахваме последната цифра
    }

    // Преобразуване на обърнатото число в дробен тип
    double reciprocal = 1.0 / reversed;

    // Отпечатване на резултата
    cout << "Обратната стойност на " << original << " е: " << reciprocal << endl;

    return 0;
}
