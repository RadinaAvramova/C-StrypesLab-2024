#include <iostream>
using namespace std;

int main() {
    double hours;

    // Четене на брой часове
    cout << "Въведете брой часове: ";
    cin >> hours;

    // Конвертиране на часове в секунди
    double seconds = hours * 3600;

    // Отпечатване на резултата
    cout << hours << " часа са равни на " << seconds << " секунди." << endl;

    return 0;
}
