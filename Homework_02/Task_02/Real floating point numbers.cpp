#include <iostream>
#include <cmath>
#include <limits>

// Функция за сравнение чрез абсолютна разлика
bool compareAbsolute(float a, float b, float epsilon) {
    return std::fabs(a - b) < epsilon;
}

// Функция за сравнение чрез относителна разлика
bool compareRelative(float a, float b, float epsilon) {
    return std::fabs(a - b) / std::max(std::fabs(a), std::fabs(b)) < epsilon;
}

// Унифициран метод за сравнение (комбинация от абсолютна и относителна разлика)
bool compareUnified(float a, float b, float epsilon) {
    float diff = std::fabs(a - b);
    if (diff < epsilon) {
        return true;
    }
    return diff / std::max(std::fabs(a), std::fabs(b)) < epsilon;
}

// Тест функция за сравнение на различни epsilon
void testComparisons(float a, float b, float epsilon) {
    int correct = 0, incorrect = 0;

    // Тест чрез абсолютна разлика
    if (compareAbsolute(a, b, epsilon)) {
        correct++;
    } else {
        incorrect++;
    }

    // Тест чрез относителна разлика
    if (compareRelative(a, b, epsilon)) {
        correct++;
    } else {
        incorrect++;
    }

    // Тест чрез унифицирания метод
    if (compareUnified(a, b, epsilon)) {
        correct++;
    } else {
        incorrect++;
    }

    std::cout << "Тест за a = " << a << " и b = " << b << " с epsilon = " << epsilon << std::endl;
    std::cout << "Коректни сравнения: " << correct << std::endl;
    std::cout << "Некоректни сравнения: " << incorrect << std::endl;
}

// Тест функция за сравнение на float и double
void testFloatDouble() {
    float a_float = 0.1f + 0.2f;   // Резултатът не е точно 0.3 поради загуба на точност
    double a_double = 0.1 + 0.2;   // Double има по-голяма точност
    float epsilon_float = 1e-6f;
    double epsilon_double = 1e-9;

    std::cout << "\nТест с float:" << std::endl;
    testComparisons(a_float, 0.3f, epsilon_float);

    std::cout << "\nТест с double:" << std::endl;
    testComparisons(a_double, 0.3, epsilon_double);
}

int main() {
    // Примерни числа за тест
    float a = 0.1234567f;
    float b = 0.1234568f;

    float epsilon1 = 1e-6f;
    float epsilon2 = 1e-5f;

    std::cout << "Тест с малки разлики и epsilon1:" << std::endl;
    testComparisons(a, b, epsilon1);

    std::cout << "\nТест с малки разлики и epsilon2:" << std::endl;
    testComparisons(a, b, epsilon2);

    // Тестване на разликата между float и double
    testFloatDouble();

    return 0;
}
