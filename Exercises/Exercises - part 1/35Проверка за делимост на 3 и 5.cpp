#include <iostream>
using namespace std;

int main() {
    int number;

    // Четене на числото
    cout << "Въведете цяло число: ";
    cin >> number;

    // Проверка за делимост
    if (number % 3 == 0 && number % 5 == 0) {
        cout << "Числото е делимо и на 3, и на 5." << endl;
    } else if (number % 3 == 0) {
        cout << "Числото е делимо само на 3." << endl;
    } else if (number % 5 == 0) {
        cout << "Числото е делимо само на 5." << endl;
    } else {
        cout << "Числото не е делимо нито на 3, нито на 5." << endl;
    }

    return 0;
}
