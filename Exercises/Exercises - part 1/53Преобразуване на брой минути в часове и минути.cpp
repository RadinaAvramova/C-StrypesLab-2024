#include <iostream>
using namespace std;

int main() {
    // Деклариране на променлива за общия брой минути
    int total_minutes;

    // Четене на общия брой минути от потребителя
    cout << "Въведете общия брой минути: ";
    cin >> total_minutes;

    // Изчисляване на часовете и остатъчните минути
    int hours = total_minutes / 60;
    int minutes = total_minutes % 60;

    // Отпечатване на резултата
    cout << "Часове: " << hours << ", Минутите: " << minutes << endl;

    return 0;
}
