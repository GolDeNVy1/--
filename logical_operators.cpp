#include <iostream>

int main() {
    std::cout << "Enter a number: ";
    int number;
    std::cin >> number;

    bool expression = ((number == 10) || (number == 20) || (number == 30));
    std::cout << expression << std::endl;

    return 0;
}