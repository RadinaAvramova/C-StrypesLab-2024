#include <iostream>

// Функция за установяване на конкретен бит на 1
int setBit(int number, int position) {
    return number | (1 << (position - 1));
}

// Функция за изчистване на конкретен бит на 0
int clearBit(int number, int position) {
    return number & ~(1 << (position - 1));
}

int main() {
    int number, bitPosition;
    
    // Въвеждане на число
    std::cout << "Въведете число: ";
    std::cin >> number;

    // Установяване на 3-тия бит на 1
    bitPosition = 3;
    int newNumber = setBit(number, bitPosition);
    std::cout << "Поставете " << bitPosition << "-тия бит на 1: " << newNumber;
    
    // Проверка дали битът вече е бил 1
    if (newNumber == number) {
        std::cout << " (вече е 1)";
    }
    std::cout << std::endl;

    // Изчистване на 4-тия бит на 0
    bitPosition = 4;
    newNumber = clearBit(number, bitPosition);
    std::cout << "Изчистете " << bitPosition << "-тия бит (на 0): " << newNumber << std::endl;

    return 0;
}
