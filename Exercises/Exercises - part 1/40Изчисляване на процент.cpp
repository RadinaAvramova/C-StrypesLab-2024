#include <iostream>
using namespace std;

int main() {
    double A, B;

    // Четене на стойностите на A и B
    cout << "Въведете стойността на A: ";
    cin >> A;
    cout << "Въведете стойността на B: ";
    cin >> B;

    // Проверка дали B не е 0 (защото не можем да делим на 0)
    if (B == 0) {
        cerr << "Грешка: Деление на нула не е възможно." << endl;
    } else {
        // Изчисляване на процента
        double percentage = (A / B) * 100;

        // Отпечатване на резултата
        cout << A << " е " << percentage << "% от " << B << "." << endl;
    }

    return 0;
}
