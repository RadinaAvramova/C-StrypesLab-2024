#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Четене на три цели числа
    cout << "Въведете първото число: ";
    cin >> num1;
    cout << "Въведете второто число: ";
    cin >> num2;
    cout << "Въведете третото число: ";
    cin >> num3;

    // Изчисляване на произведението
    int product = num1 * num2 * num3;

    // Отпечатване на резултата
    cout << "Произведението на " << num1 << ", " << num2 << " и " << num3 << " е: " << product << endl;

    return 0;
}
