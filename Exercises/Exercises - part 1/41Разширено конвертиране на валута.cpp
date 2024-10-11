#include <iostream>
using namespace std;

int main() {
    // Константи за курсовете на валутите към лева
    const double BGN_TO_USD = 0.54;  // Примерен курс за долар
    const double BGN_TO_EUR = 0.51;  // Примерен курс за евро
    const double BGN_TO_GBP = 0.44;  // Примерен курс за британска лира

    // Четене на сумата в левове
    double leva;
    cout << "Въведете сума в левове: ";
    cin >> leva;

    // Конвертиране в долари, евро и британски лири
    double dollars = leva * BGN_TO_USD;
    double euros = leva * BGN_TO_EUR;
    double pounds = leva * BGN_TO_GBP;

    // Отпечатване на резултатите
    cout << leva << " лева са равни на " << dollars << " долара." << endl;
    cout << leva << " лева са равни на " << euros << " евро." << endl;
    cout << leva << " лева са равни на " << pounds << " британски лири." << endl;

    return 0;
}
