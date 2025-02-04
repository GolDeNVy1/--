#include <iostream>

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    switch (number) {
        case 1:
            std::cout << "It's one!\n";
            break;
        case 2:
            std::cout << "It's two!\n";
            break;
        default:
            std::cout << "It's something different!\n";
    }

    if (number == 1)
        std::cout << "It's one!\n";
    else if (number == 2)
        std::cout << "It's two!\n";
    else
        std::cout << "It's something different!\n";

    return 0;
}
