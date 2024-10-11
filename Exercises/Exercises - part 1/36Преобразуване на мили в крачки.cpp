#include <iostream>
using namespace std;

int main() {
    double miles;

    // Четене на разстоянието в мили
    cout << "Въведете разстоянието в мили: ";
    cin >> miles;

    // Преобразуване на мили в крачки (1 миля = 2000 крачки)
    double steps = miles * 2000;

    // Отпечатване на резултата
    cout << miles << " мили са равни на " << steps << " крачки." << endl;

    return 0;
}
