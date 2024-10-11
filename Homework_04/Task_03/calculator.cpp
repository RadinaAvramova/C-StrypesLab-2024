#include <iostream>
#include <cstdlib>
#include <cstring>

int main(int argc, char* argv[]) {
    // Проверка за правилен брой аргументи
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " [number1] [operation] [number2]" << std::endl;
        return 1;
    }

    // Прочитане на аргументите от командния ред
    double num1 = std::atof(argv[1]);
    double num2 = std::atof(argv[3]);
    char operation = argv[2][0];

    // Променлива за резултата
    double result = 0.0;

    // Извършване на съответната операция
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case 'x':
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                std::cerr << "Error: Division by zero" << std::endl;
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            std::cerr << "Error: Invalid operation. Supported operations are +, -, x, /" << std::endl;
            return 1;
    }

    // Извеждане на резултата
    std::cout << "Result: " << result << std::endl;

    return 0;
}
