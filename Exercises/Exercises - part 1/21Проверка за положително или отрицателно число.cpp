#include <iostream>
using namespace std;

int main() {
    int number;

    // Четене на цяло число
    cout << "Въведете цяло число: ";
    cin >> number;

    // Проверка на числото
    if (number > 0) {
        cout << "Числото е положително." << endl;
    } else if (number < 0) {
        cout << "Числото е отрицателно." << endl;
    } else {
        cout << "Числото е нула." << endl;
    }

    return 0;
}
