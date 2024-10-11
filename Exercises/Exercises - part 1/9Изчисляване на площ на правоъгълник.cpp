#include <iostream>
using namespace std;

int main() {
    double width, height;

    // Четене на ширина и височина на правоъгълника
    cout << "Въведете ширината на правоъгълника: ";
    cin >> width;
    cout << "Въведете височината на правоъгълника: ";
    cin >> height;

    // Изчисляване на площ и периметър
    double area = width * height;
    double perimeter = 2 * (width + height);

    // Отпечатване на резултата
    cout << "Площта на правоъгълника е: " << area << endl;
    cout << "Периметърът на правоъгълника е: " << perimeter << endl;

    return 0;
}
