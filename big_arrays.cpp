#include <iostream>

int main() {
    const int WEEKS = 3, DAYS = 7;
    int temperature[WEEKS][DAYS] = {
        {10, 20}, {100, 200}, {1000, 2000},
    };
    for (int i = 0; i < WEEKS; i++) {
        for (int j = 0; j < DAYS; j++) {
            std::cout << "temperatures[" << i << "][" << j << "] = " << temperature[i][j] << std::endl;
        }
        std::cout << std::endl;
        }
    }


