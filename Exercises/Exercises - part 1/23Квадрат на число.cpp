#include <iostream>
using namespace std;

int main() {
    int number;

    // Четене на цяло число
    cout << "Въведете цяло число: ";
    cin >> number;

    // Изчисляване на квадрата
    int square = number * number;

    // Отпечатване на резултата
    cout << "Квадратът на " << number << " е: " << square << endl;

    return 0;
}
