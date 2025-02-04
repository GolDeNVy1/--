#include <iostream>

int main() {
    for (int number1 = 1, number2 = 20; number1 <= 10 && number2 <= 40;  number1 += 10, number2 -= 3) {
        std::cout << number1 << " " << number2 << std::endl;

    } return 0;
}