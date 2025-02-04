#include <iostream> 

int main() {
    // int number;
    // std::cout << "Enter a number: ";
    // std::cin >> number;
    // if (!number)
    //     std::cout << "The number is zero.";

    std::cout << "Enter a number: ";
    int number;
    std::cin >> number;

    if (number == 1)
        std::cout << "One." << std::endl;
    else if (number == 2)
        std::cout << "Two." << std::endl;
    else if (number == 3)
        std::cout << "Three." << std::endl;
    else
        std::cout << "Other." << std::endl;
    return 0;
}