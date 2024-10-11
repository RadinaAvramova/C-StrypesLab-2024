#include <iostream>
using namespace std;

int main() {
    double leva, euro;
    const double exchangeRate = 1.95583;  // Курс на лева към евро (примерен)

    // Четене на сума в лева
    cout << "Въведете сума в лева: ";
    cin >> leva;
    
    // Конвертиране в евро
    euro = leva / exchangeRate;
    
    // Отпечатване на резултата
    cout << "Сумата в евро е: " << euro << endl;
    
    return 0;
}
