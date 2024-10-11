#include <iostream>
using namespace std;

int main() {
    // Задаваме текущия курс на долара към лева
    const double USD_TO_BGN = 1.85;  // Примерен курс

    // Четене на сумата в долари
    double dollars;
    cout << "Въведете сумата в долари: ";
    cin >> dollars;

    // Конвертиране на долари в лева
    double leva = dollars * USD_TO_BGN;

    // Отпечатване на резултата
    cout << dollars << " долара са равни на " << leva << " лева." << endl;

    return 0;
}
