#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    // Проверка дали е подаден аргумент от командния ред
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " [string_to_count]" << std::endl;
        return 1;
    }

    std::string targetString = argv[1]; // Стрингът, който ще броим
    std::string inputLine;
    int count = 0;

    // Четене на редове от стандартния вход до EOF (Ctrl+D)
    while (std::getline(std::cin, inputLine)) {
        if (inputLine == targetString) {
            ++count;
        }
    }

    // Извеждане на броя на срещанията
    std::cout << "Count = " << count << std::endl;

    return 0;
}
