#include <iostream>

int main() {
    // int sum = 0;
    // int number;

    // std::cout << "Enter a number (0 to stop): ";
    // std::cin >> number;
    // sum =+ number;

    // while (number != 0) {
    //     std::cout << "Enter a number (0 to stop): ";
    //     std::cin >> number;
    //     sum += number;
    // }
    // std::cout << "The sum of the numbers is: " << sum << std::endl;
    int sum = 0;
    int number;

    do {
        std::cout << "Enter a number (0 to stop): ";
        std::cin >> number;
        sum += number;
    } while (number != 0);

    std::cout << "The sum of the numbers is: " << sum << std::endl;
    return 0;

}
