#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Четене на двете цели числа
    cout << "Въведете първото число: ";
    cin >> num1;
    cout << "Въведете второто число: ";
    cin >> num2;

    // Проверка за деление на 0
    if (num2 == 0) {
        cerr << "Грешка: Деление на нула не е възможно." << endl;
    } else {
        // Изчисляване на резултата от делението и остатъка
        int quotient = num1 / num2;
        int remainder = num1 % num2;

        // Отпечатване на резултата
        cout << "Резултат от делението: " << quotient << endl;
        cout << "Остатък от делението: " << remainder << endl;
    }

    return 0;
}
