#include <iostream>

int main() {
    int num1, num2, choice;
    
    // Въвеждане на две цели числа
    std::cout << "Въведете първото число: ";
    std::cin >> num1;
    std::cout << "Въведете второто число: ";
    std::cin >> num2;

    // Меню за избор на операция
    std::cout << "Изберете операция:\n";
    std::cout << "1: AND\n";
    std::cout << "2: OR\n";
    std::cout << "3: XOR\n";
    std::cout << "4: Изместване наляво (първото число)\n";
    std::cout << "5: Изместване надясно (първото число)\n";
    std::cin >> choice;

    int result = 0;

    // Извършване на избраната операция
    switch (choice) {
        case 1:
            result = num1 & num2;
            std::cout << "Резултат (AND): " << result << std::endl;
            break;
        case 2:
            result = num1 | num2;
            std::cout << "Резултат (OR): " << result << std::endl;
            break;
        case 3:
            result = num1 ^ num2;
            std::cout << "Резултат (XOR): " << result << std::endl;
            break;
        case 4:
            std::cout << "Въведете броя на местенията наляво: ";
            int shiftLeft;
            std::cin >> shiftLeft;
            result = num1 << shiftLeft;
            std::cout << "Резултат (Изместване наляво): " << result << std::endl;
            break;
        case 5:
            std::cout << "Въведете броя на местенията надясно: ";
            int shiftRight;
            std::cin >> shiftRight;
            result = num1 >> shiftRight;
            std::cout << "Резултат (Изместване надясно): " << result << std::endl;
            break;
        default:
            std::cout << "Невалидна операция!" << std::endl;
            break;
    }

    return 0;
}
