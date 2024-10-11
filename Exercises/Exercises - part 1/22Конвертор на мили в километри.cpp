#include <iostream>
using namespace std;

int main() {
    double miles;

    // Четене на разстояние в мили
    cout << "Въведете разстояние в мили: ";
    cin >> miles;

    // Конвертиране на мили в километри
    double kilometers = miles * 1.60934;

    // Отпечатване на резултата
    cout << miles << " мили са равни на " << kilometers << " километри." << endl;

    return 0;
}
