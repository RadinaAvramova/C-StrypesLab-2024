#include <iostream>
using namespace std;

int main() {
    // Четене на цяло число
    int number;
    cout << "Въведете цяло число: ";
    cin >> number;

    // Проверка на кратността
    bool divisibleBy2 = (number % 2 == 0);
    bool divisibleBy3 = (number % 3 == 0);
    bool divisibleBy5 = (number % 5 == 0);

    // Отпечатване на резултата
    if (divisibleBy2 && divisibleBy3 && divisibleBy5) {
        cout << number << " е кратно на 2, 3 и 5." << endl;
    } else if (divisibleBy2 && divisibleBy3) {
        cout << number << " е кратно на 2 и 3." << endl;
    } else if (divisibleBy2 && divisibleBy5) {
        cout << number << " е кратно на 2 и 5." << endl;
    } else if (divisibleBy3 && divisibleBy5) {
        cout << number << " е кратно на 3 и 5." << endl;
    } else if (divisibleBy2) {
        cout << number << " е кратно на 2." << endl;
    } else if (divisibleBy3) {
        cout << number << " е кратно на 3." << endl;
    } else if (divisibleBy5) {
        cout << number << " е кратно на 5." << endl;
    } else {
        cout << number << " не е кратно нито на 2, нито на 3, нито на 5." << endl;
    }

    return 0;
}
