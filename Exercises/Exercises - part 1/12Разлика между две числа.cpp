#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Четене на две цели числа
    cout << "Въведете първото число: ";
    cin >> num1;
    cout << "Въведете второто число: ";
    cin >> num2;

    // Изчисляване на разликата
    int difference = num1 - num2;

    // Отпечатване на резултата
    cout << "Разликата между " << num1 << " и " << num2 << " е: " << difference << endl;

    return 0;
}
