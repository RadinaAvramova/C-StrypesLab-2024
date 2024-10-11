#include <iostream>
using namespace std;

int main() {
    int N;
    double sum = 0.0;

    // Четене на числото N
    cout << "Въведете броя на числата (N): ";
    cin >> N;

    // Проверка за валидност на N
    if (N <= 0) {
        cout << "Броят на числата трябва да бъде положително число." << endl;
        return 1; // Завършване на програмата с код за грешка
    }

    // Четене на N реални числа
    for (int i = 0; i < N; i++) {
        double number;
        cout << "Въведете число " << (i + 1) << ": ";
        cin >> number;
        sum += number; // Добавяне на числото към сумата
    }

    // Изчисляване на средното аритметично
    double average = sum / N;

    // Отпечатване на резултата
    cout << "Средното аритметично на числата е: " << average << endl;

    return 0;
}
