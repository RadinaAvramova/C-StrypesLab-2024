#include <iostream>
using namespace std;

int main() {
    double priceWithoutVAT, VATRate = 0.20;

    // Четене на цената без ДДС
    cout << "Въведете цена на продукта без ДДС: ";
    cin >> priceWithoutVAT;

    // Изчисляване на ДДС
    double VAT = priceWithoutVAT * VATRate;

    // Изчисляване на крайната цена
    double finalPrice = priceWithoutVAT + VAT;

    // Отпечатване на крайната цена
    cout << "Крайната цена с ДДС е: " << finalPrice << " лв." << endl;

    return 0;
}
