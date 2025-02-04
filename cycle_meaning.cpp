#include <iostream>

int main() {
    int userNumber;
    int sum = 0;

    if (userNumber != 0) {
        std::cout << "Enter a number (0 to stop): ";
        std::cin >> userNumber;
        sum += userNumber;

        if (userNumber == 0) {
            std::cout << "Enter a number (0 to stop): ";
            std::cin >> userNumber;
            sum += userNumber;
        }
            if (userNumber == 0) {
                std::cout << "Enter a number (0 to stop): ";
                std::cin >> userNumber;
                sum += userNumber;
            }
                if (userNumber == 0) {
                    std::cout << "Enter a number (0 to stop): ";
                    std::cin >> userNumber;
                    sum += userNumber;
                }
    return 0;


}