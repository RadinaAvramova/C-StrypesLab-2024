#include <iostream>
using namespace std;

int main() {
    // Деклариране на променливи
    double a, b;

    // Четене на стойностите на a и b
    cout << "Въведете две числа (a и b): ";
    cin >> a >> b;

    // Изчисляване на израза (a + b) * (a - b)
    double result = (a + b) * (a - b);

    // Отпечатване на резултата
    cout << "Резултатът на израза (a + b) * (a - b) е: " << result << endl;

    return 0;
}
