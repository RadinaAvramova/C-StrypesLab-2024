#include <iostream>
using namespace std;

int main() {
    double meters;

    // Четене на разстояние в метри
    cout << "Въведете разстояние в метри: ";
    cin >> meters;

    // Конвертиране на метри в километри
    double kilometers = meters / 1000.0;

    // Отпечатване на резултата
    cout << "Разстоянието в километри е: " << kilometers << endl;

    return 0;
}
