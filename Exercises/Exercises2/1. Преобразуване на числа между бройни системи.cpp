#include <iostream>
#include <string>
#include <sstream>
#include <iomanip> // За std::hex и std::oct

// Функции за конвертиране на число от десетична система към други бройни системи
std::string decimalToBinary(int decimal) {
    std::string binary = "";
    while (decimal > 0) {
        binary = (decimal % 2 == 0 ? "0" : "1") + binary;
        decimal /= 2;
    }
    return binary.empty() ? "0" : binary;
}

std::string decimalToOctal(int decimal) {
    std::ostringstream oss;
    oss << std::oct << decimal;
    return oss.str();
}

std::string decimalToHexadecimal(int decimal) {
    std::ostringstream oss;
    oss << std::hex << std::uppercase << decimal;
    return oss.str();
}

// Функции за конвертиране на числа към десетична бройна система
int binaryToDecimal(const std::string& binary) {
    return std::stoi(binary, nullptr, 2);
}

int octalToDecimal(const std::string& octal) {
    return std::stoi(octal, nullptr, 8);
}

int hexadecimalToDecimal(const std::string& hexadecimal) {
    return std::stoi(hexadecimal, nullptr, 16);
}

void convertDecimal(int decimal) {
    std::cout << "Двоично: " << decimalToBinary(decimal) << std::endl;
    std::cout << "Осмично: " << decimalToOctal(decimal) << std::endl;
    std::cout << "Шестнадесетично: " << decimalToHexadecimal(decimal) << std::endl;
}

void convertFromOtherBase() {
    int choice;
    std::cout << "Изберете бройната система:\n";
    std::cout << "1. Двоично\n";
    std::cout << "2. Осмично\n";
    std::cout << "3. Шестнадесетично\n";
    std::cin >> choice;
    
    std::string input;
    int decimal = 0;
    
    switch (choice) {
        case 1:
            std::cout << "Въведете двоично число: ";
            std::cin >> input;
            decimal = binaryToDecimal(input);
            break;
        case 2:
            std::cout << "Въведете осмично число: ";
            std::cin >> input;
            decimal = octalToDecimal(input);
            break;
        case 3:
            std::cout << "Въведете шестнадесетично число: ";
            std::cin >> input;
            decimal = hexadecimalToDecimal(input);
            break;
        default:
            std::cout << "Невалиден избор!" << std::endl;
            return;
    }

    std::cout << "Десетично: " << decimal << std::endl;
    convertDecimal(decimal);
}

int main() {
    int choice;
    do {
        std::cout << "Изберете опция:\n";
        std::cout << "1. Конвертиране на десетично число в други бройни системи\n";
        std::cout << "2. Конвертиране от друга бройна система в десетична\n";
        std::cout << "0. Изход\n";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int decimal;
                std::cout << "Въведете десетично число: ";
                std::cin >> decimal;
                convertDecimal(decimal);
                break;
            }
            case 2:
                convertFromOtherBase();
                break;
            case 0:
                std::cout << "Изход...\n";
                break;
            default:
                std::cout << "Невалиден избор!\n";
                break;
        }
    } while (choice != 0);
    
    return 0;
}
