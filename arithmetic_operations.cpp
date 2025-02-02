#include <iostream>

int main() {
    std::cout << "Enter seconds: ";
    int userSeconds;
    std::cin >> userSeconds;

    int hours = userSeconds / 3600;
    int minutes = (userSeconds % 3600) / 60;
    int seconds = userSeconds % 60;

    std::cout << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << std::endl;
}