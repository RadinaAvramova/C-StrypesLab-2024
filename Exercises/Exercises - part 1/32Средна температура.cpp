#include <iostream>
using namespace std;

int main() {
    double temperatures[7];  // Масив за 7 дневни температури
    double sum = 0.0;        // Променлива за съхранение на сумата на температурите

    // Въвеждане на температурите за 7 дни
    cout << "Въведете температурите за 7 дни:" << endl;
    for (int i = 0; i < 7; i++) {
        cin >> temperatures[i];
        sum += temperatures[i];  // Сумираме въведените температури
    }

    // Изчисляване на средната температура
    double average = sum / 7;

    // Отпечатване на средната температура
    cout << "Средната температура за седмицата е: " << average << "°C" << endl;

    return 0;
}
