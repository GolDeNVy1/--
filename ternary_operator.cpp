#include <iostream>

int main() {
    std::cout << "Enter x: ";
    int x;
    std::cin >> x;

    std::cout << "Enter y: ";
    int y;
    std::cin >> y;

    std::cout << ((x > 0 && y > 0) ? "1" :
                 (x < 0 && y > 0) ? "2" :
                 (x < 0 && y < 0) ? "3" :
                 (x > 0 && y < 0) ? "4" :
                 "Between") << std::endl;

    if (x > 0 && y > 0)
        std::cout << "1\n";
    else if (x < 0 && y > 0)
        std::cout << "2\n";
    else if (x < 0 && y < 0)
        std::cout << "3\n";
    else if (x > 0 && y < 0)
        std::cout << "4\n";
    else
        std::cout << "Between\n";

    return 0;
}
