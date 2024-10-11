#include <iostream>
using namespace std;

int main() {
    // Деклариране на променливи
    double centimeters, inches;

    // Четене на дължина в сантиметри
    cout << "Въведете дължина в сантиметри: ";
    cin >> centimeters;

    // Преобразуване на сантиметри в инчове
    inches = centimeters / 2.54;

    // Отпечатване на резултата
    cout << centimeters << " см е равно на " << inches << " инча." << endl;

    return 0;
}
