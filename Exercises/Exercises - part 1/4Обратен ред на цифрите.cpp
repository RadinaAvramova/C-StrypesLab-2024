#include <iostream>
using namespace std;

int main() {
    int num;
    
    // Четене на цяло число
    cin >> num;
    
    // Докато числото не стане 0, извличаме последната цифра и я отпечатваме
    while (num != 0) {
        int last_digit = num % 10; // Вземаме последната цифра
        cout << last_digit;        // Отпечатваме я
        num = num / 10;            // Премахваме последната цифра
    }
    
    cout << endl;
    return 0;
}
