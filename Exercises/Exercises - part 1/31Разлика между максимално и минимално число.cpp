#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    // Четене на трите реални числа
    cout << "Въведете три реални числа: ";
    cin >> a >> b >> c;

    // Намиране на максималното число
    double maxNumber = max(a, max(b, c));

    // Намиране на минималното число
    double minNumber = min(a, min(b, c));

    // Изчисляване на разликата
    double difference = maxNumber - minNumber;

    // Отпечатване на резултата
    cout << "Разликата между максималното и минималното число е: " << difference << endl;

    return 0;
}
