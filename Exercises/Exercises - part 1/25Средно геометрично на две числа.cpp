#include <iostream>
#include <cmath> // За sqrt()
using namespace std;

int main() {
    double num1, num2;

    // Четене на две положителни реални числа
    cout << "Въведете първото положително число: ";
    cin >> num1;
    cout << "Въведете второто положително число: ";
    cin >> num2;

    // Проверка дали числата са положителни
    if (num1 <= 0 || num2 <= 0) {
        cout << "Моля, въведете положителни числа." << endl;
    } else {
        // Изчисляване на средното геометрично
        double geometricMean = sqrt(num1 * num2);

        // Отпечатване на резултата
        cout << "Средното геометрично на " << num1 << " и " << num2 << " е: " << geometricMean << endl;
    }

    return 0;
}
