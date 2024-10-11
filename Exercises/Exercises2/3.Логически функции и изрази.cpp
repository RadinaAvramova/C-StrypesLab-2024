#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>

// Функция за конвертиране на двоичен низ в цяло число
unsigned int binaryStringToInt(const std::string& binary) {
    return std::bitset<32>(binary).to_ulong();
}

// Функция за конвертиране на цяло число обратно в двоичен низ
std::string intToBinaryString(unsigned int num, int length) {
    std::string binary = std::bitset<32>(num).to_string();
    return binary.substr(32 - length); // Връщаме само нужните битове
}

// Функция за логическа операция NOT
std::string notOperation(const std::string& binary) {
    unsigned int num = binaryStringToInt(binary);
    unsigned int notResult = ~num; // Прилагане на операцията NOT
    return intToBinaryString(notResult, binary.length());
}

int main() {
    std::string binary1, binary2;
    
    std::cout << "Въведете първото число: ";
    std::cin >> binary1;
    std::cout << "Въведете второто число: ";
    std::cin >> binary2;
    
    // Уверяваме се, че дължините на двата стринга са еднакви
    int length = std::max(binary1.length(), binary2.length());
    binary1.insert(0, length - binary1.length(), '0'); // Допълваме с нули отляво
    binary2.insert(0, length - binary2.length(), '0'); // Допълваме с нули отляво

    // Конвертираме двоичните числа в цели числа
    unsigned int num1 = binaryStringToInt(binary1);
    unsigned int num2 = binaryStringToInt(binary2);

    // Приложение на логическите операции
    unsigned int andResult = num1 & num2;
    unsigned int orResult = num1 | num2;
    unsigned int xorResult = num1 ^ num2;

    // Принтиране на резултатите
    std::cout << "AND: " << intToBinaryString(andResult, length) << std::endl;
    std::cout << "OR: " << intToBinaryString(orResult, length) << std::endl;
    std::cout << "XOR: " << intToBinaryString(xorResult, length) << std::endl;
    std::cout << "NOT на първото число: " << notOperation(binary1) << std::endl;

    return 0;
}
