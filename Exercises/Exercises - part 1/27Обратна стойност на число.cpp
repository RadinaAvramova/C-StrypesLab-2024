#include <iostream>
using namespace std;

int main() {
    double number;

    // Четене на реално число
    cout << "Въведете реално число: ";
    cin >> number;

    // Проверка дали числото е равно на нула
    if (number == 0) {
        cerr << "Грешка: Обратната стойност не е дефинирана за нула." << endl;
    } else {
        // Изчисляване на обратната стойност
        double inverse = 1.0 / number;

        // Отпечатване на резултата
        cout << "Обратната стойност на " << number << " е: " << inverse << endl;
    }

    return 0;
}
