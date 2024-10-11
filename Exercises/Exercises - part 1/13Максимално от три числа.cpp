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

    // Намиране на максималното число
    int maxNum = num1; // Предположим, че num1 е най-голямото

    if (num2 > maxNum) {
        maxNum = num2; // Ако num2 е по-голямо, обновяваме maxNum
    }
    if (num3 > maxNum) {
        maxNum = num3; // Ако num3 е по-голямо, обновяваме maxNum
    }

    // Отпечатване на най-голямото число
    cout << "Най-голямото от трите числа е: " << maxNum << endl;

    return 0;
}
