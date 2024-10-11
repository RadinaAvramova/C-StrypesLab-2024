#include <iostream>
using namespace std;

int main() {
    int num;
    
    // Четене на цяло число
    cin >> num;
    
    // Проверка за четност
    if (num % 2 == 0) {
        cout << "Четно" << endl;
    } else {
        cout << "Нечетно" << endl;
    }
    
    return 0;
}
