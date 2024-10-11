#include <iostream>
#include <cmath> // За sqrt функцията
using namespace std;

int main() {
    // Деклариране на променливи
    double grade1, grade2, grade3, grade4;

    // Четене на четири оценки
    cout << "Въведете четири оценки: ";
    cin >> grade1 >> grade2 >> grade3 >> grade4;

    // Изчисляване на произведението на оценките
    double product = grade1 * grade2 * grade3 * grade4;

    // Изчисляване на средно геометрично
    double geometricMean = sqrt(product);

    // Отпечатване на резултата
    cout << "Средно геометрично на оценките е: " << geometricMean << endl;

    return 0;
}
