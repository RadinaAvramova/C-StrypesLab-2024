#include <iostream>
using namespace std;

int main() {
    // Четене на цена на продукт и платена сума
    double price, paid;
    cout << "Въведете цена на продукта: ";
    cin >> price;
    cout << "Въведете платената сума: ";
    cin >> paid;

    // Проверка дали платената сума е достатъчна
    if (paid < price) {
        cerr << "Грешка: Платената сума е по-малка от цената на продукта." << endl;
    } else {
        // Изчисляване на остатъка (ресто)
        double change = paid - price;
        cout << "Ресто: " << change << " лв." << endl;
    }

    return 0;
}
