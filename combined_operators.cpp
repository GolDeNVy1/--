#include <iostream>

int main() {
    std::cout << "Enter a number: ";
    int number;
    std::cin >> number;
    std::cout << "Number = " << number << std::endl;
    number += 10;
    std::cout << "Number = " << number << std::endl;
    number -= 3;
    std::cout << "Number = " << number << std::endl;
    number *= 2;
    std::cout << "Number = " << number << std::endl;
    number /= 4;
    std::cout << "Number = " << number << std::endl;
    number %= 2;
    std::cout << "Number = " << number << std::endl;
    return 0;
}
