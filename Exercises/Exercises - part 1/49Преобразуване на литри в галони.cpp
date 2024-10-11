#include <iostream>
using namespace std;

int main() {
    // Деклариране на променлива за обем в литри
    double liters, gallons;

    // Четене на обем в литри от потребителя
    cout << "Въведете обем в литри: ";
    cin >> liters;

    // Преобразуване на литри в галони
    gallons = liters / 3.78541;

    // Отпечатване на резултата
    cout << liters << " литра е равно на " << gallons << " американски галона." << endl;

    return 0;
}
