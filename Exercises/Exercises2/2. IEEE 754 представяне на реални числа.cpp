#include <iostream>
#include <bitset>
#include <cstdint>

// Обединение за представяне на едно и също число като float и uint32_t
union Float32Bits {
    float number;
    uint32_t bits;
};

void printIEEE754(float number) {
    Float32Bits floatBits;
    floatBits.number = number;
    
    // Извличане на отделните компоненти чрез побитови операции
    uint32_t sign = (floatBits.bits >> 31) & 0x1; // Знакът е най-левият бит
    uint32_t exponent = (floatBits.bits >> 23) & 0xFF; // Експонентата са следващите 8 бита
    uint32_t mantissa = floatBits.bits & 0x7FFFFF; // Мантисата са последните 23 бита

    // Принтиране на резултата
    std::cout << "Знак: " << sign << std::endl;
    std::cout << "Експонента: " << std::bitset<8>(exponent) << std::endl; // Показваме експонентата като 8-битов двоичен стринг
    std::cout << "Мантиса: " << std::bitset<23>(mantissa) << std::endl; // Мантисата като 23-битов двоичен стринг
}

int main() {
    float number;
    std::cout << "Въведете реално число: ";
    std::cin >> number;

    printIEEE754(number);

    return 0;
}
