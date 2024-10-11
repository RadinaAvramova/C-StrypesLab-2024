#include <iostream>
using namespace std;

int main() {
    // Деклариране на променлива за температура
    double fahrenheit, celsius;

    // Четене на температура във Фаренхайт
    cout << "Въведете температура във Фаренхайт: ";
    cin >> fahrenheit;

    // Преобразуване на Фаренхайт в Целзий
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    // Отпечатване на резултата
    cout << fahrenheit << " °F е равно на " << celsius << " °C." << endl;

    return 0;
}
