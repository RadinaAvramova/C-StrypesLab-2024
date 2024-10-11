#include <iostream>
using namespace std;

int main() {
    int totalSeconds;

    // Четене на общия брой секунди
    cout << "Въведете общ брой секунди: ";
    cin >> totalSeconds;

    // Изчисляване на часовете, минутите и остатъчните секунди
    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    // Отпечатване на резултата
    cout << totalSeconds << " секунди е равно на " 
         << hours << " часа, " 
         << minutes << " минути и " 
         << seconds << " секунди." << endl;

    return 0;
}
