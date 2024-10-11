#include <iostream>
using namespace std;

int main() {
    double edgeLength;

    // Четене на дължина на ръба на куба
    cout << "Въведете дължина на ръба на куба: ";
    cin >> edgeLength;

    // Изчисляване на обема на куба
    double volume = edgeLength * edgeLength * edgeLength; // или volume = pow(edgeLength, 3);

    // Отпечатване на резултата
    cout << "Обемът на куба е: " << volume << endl;

    return 0;
}
