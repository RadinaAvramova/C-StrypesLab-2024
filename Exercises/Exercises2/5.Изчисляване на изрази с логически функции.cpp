#include <iostream>

int main() {
    // Променливи за входните стойности A, B, C
    bool A, B, C;

    // Въвеждане на стойности за A, B и C
    std::cout << "Въведете стойност за A (0 или 1): ";
    std::cin >> A;
    std::cout << "Въведете стойност за B (0 или 1): ";
    std::cin >> B;
    std::cout << "Въведете стойност за C (0 или 1): ";
    std::cin >> C;

    // Оценяване на логическия израз (A AND B) OR NOT C
    bool result = (A && B) || !C;

    // Принтиране на резултата
    std::cout << "Резултатът от (A AND B) OR NOT C е: " << result << std::endl;

    return 0;
}
