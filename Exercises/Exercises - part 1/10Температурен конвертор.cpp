#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;

    // Четене на температура в Целзий
    cout << "Въведете температура в Целзий: ";
    cin >> celsius;

    // Конвертиране на температурата във Фаренхайт
    fahrenheit = celsius * 9.0 / 5.0 + 32.0;

    // Отпечатване на резултата
    cout << "Температурата във Фаренхайт е: " << fahrenheit << endl;

    return 0;
}
