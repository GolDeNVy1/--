#include <iostream>

int main() {
    int sum = 0;
    int number;
    int i = 0;

    while (i < 10) {
        if (i % 2 != 0)
            continue;

        std::cout << i << " ";
        i++;
        
    }

    for (int i = 0; i < 10; i++) {
        if (i % 2 != 0)
            continue;

        std::cout << i << " ";

    } return 0;
    

}