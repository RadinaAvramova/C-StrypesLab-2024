#include <iostream>
using namespace std;

int main() {
    // Деклариране на променливи
    int total_seconds, days, hours, minutes, seconds;

    // Четене на общия брой секунди от потребителя
    cout << "Въведете общия брой секунди: ";
    cin >> total_seconds;

    // Изчисляване на броя дни
    days = total_seconds / 86400;
    total_seconds %= 86400;

    // Изчисляване на броя часове
    hours = total_seconds / 3600;
    total_seconds %= 3600;

    // Изчисляване на броя минути
    minutes = total_seconds / 60;

    // Останалите секунди
    seconds = total_seconds % 60;

    // Отпечатване на резултата
    cout << "Дни: " << days << ", Часове: " << hours << ", Минути: " << minutes << ", Секунди: " << seconds << endl;

    return 0;
}
