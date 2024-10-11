#include <iostream>
using namespace std;

int main() {
    double base, height;

    // Четене на основата и височината
    cout << "Въведете основата на триъгълника: ";
    cin >> base;
    cout << "Въведете височината на триъгълника: ";
    cin >> height;

    // Изчисляване на площта на триъгълника
    double area = 0.5 * base * height;

    // Отпечатване на резултата
    cout << "Площта на триъгълника е: " << area << endl;

    return 0;
}
