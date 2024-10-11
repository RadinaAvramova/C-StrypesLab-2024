#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Четене на две цели числа
    cout << "Въведете първото число: ";
    cin >> num1;
    cout << "Въведете второто число: ";
    cin >> num2;

    // Проверка дали второто число е 0
    if (num2 == 0) {
        cerr << "Грешка: Деление на нула не е възможно." << endl;
    }
    else {
        // Проверка за делимост
        if (num1 % num2 == 0) {
            cout << num1 << " се дели точно на " << num2 << endl;
        } else {
            cerr << "Грешка: " << num1 << " не се дели точно на " << num2 << endl;
        }
    }

    return 0;
}
