#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;

    // Четене на числото N
    cout << "Въведете цяло число N: ";
    cin >> N;

    // Изчисляване на сумата на числата от 1 до N
    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    // Отпечатване на резултата
    cout << "Сумата на числата от 1 до " << N << " е: " << sum << endl;

    return 0;
}
