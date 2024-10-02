#include <iostream>
#include <bitset>    // За работа с двоични числа
#include <iomanip>   // За работа с форматирано извеждане (шестнадесетична система)

const int BITS = 32;  // Определяме броя на битовете за двоично представяне (32-битово число)

void dec2bin(int number) {
    std::cout << "BIN: " << std::bitset<BITS>(number) << std::endl;
}

void dec2oct(int number) {
    std::cout << "OCT: " << std::oct << number << std::endl;
}

void dec2hex(int number) {
    std::cout << "HEX: " << std::hex << number << std::endl;
}

int main() {
    int number;

    // Въвеждане на число от потребителя
    std::cout << "Въведете десетично число: ";
    std::cin >> number;

    // Извеждане на числото в различни бройни системи
    dec2bin(number);
    dec2oct(number);
    dec2hex(number);

    return 0;
}
