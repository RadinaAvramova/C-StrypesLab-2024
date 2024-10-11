#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    
    // Четене на три реални числа
    cin >> a >> b >> c;
    
    // Изчисляване на средната стойност
    double average = (a + b + c) / 3.0;
    
    // Отпечатване на резултата
    cout << average << endl;
    
    return 0;
}
