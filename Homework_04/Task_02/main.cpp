#include <iostream>
#include <cmath>
#include <limits>

// Функцията за изчисление на периметъра и лицето на кръг
int circle(double radius, double* perimeter, double* area) {
    if (radius < 0) {
        return -1; // Отрицателен радиус - неуспех
    }
    *perimeter = 2 * M_PI * radius; // Изчисляване на периметъра
    *area = M_PI * radius * radius; // Изчисляване на лицето
    return 0; // Успех
}

int main() {
    double radius, perimeter, area;

    std::cout << "Enter circle radius (Ctrl+D to stop):" << std::endl;

    while (std::cin >> radius) { // Четене на радиус от стандартния вход
        if (std::cin.fail()) { // Ако входът е невалиден
            std::cin.clear(); // Изчистване на състоянието на потока
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Пропускане на невалидния вход
            std::cerr << "Invalid input data" << std::endl; // Извеждане на грешка
            continue;
        }

        // Извикване на функцията circle за изчисление на периметъра и лицето
        if (circle(radius, &perimeter, &area) == 0) {
            // Успешно изчисление
            std::cout << "P = " << std::fixed << std::setprecision(2) << perimeter 
                      << ", S = " << area << std::endl;
        } else {
            // Невалиден радиус (отрицателен)
            std::cerr << "Invalid input data" << std::endl;
        }
    }

    return 0;
}
