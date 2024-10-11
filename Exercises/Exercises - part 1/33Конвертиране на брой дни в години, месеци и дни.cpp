#include <iostream>
using namespace std;

int main() {
    int totalDays;

    // Четене на общия брой дни
    cout << "Въведете общ брой дни: ";
    cin >> totalDays;

    // Изчисляване на годините
    int years = totalDays / 365;

    // Изчисляване на месеците
    int months = (totalDays % 365) / 30;

    // Изчисляване на остатъчните дни
    int days = (totalDays % 365) % 30;

    // Отпечатване на резултата
    cout << totalDays << " дни са равни на " 
         << years << " години, " 
         << months << " месеца и " 
         << days << " дни." << endl;

    return 0;
}
