#include <iostream>
//#include <Windows.h>

int main() {

    //SetConsoleOutputCP(1251);
    //SetConsoleCP(1251); не працює у мене бо я на лінуксі, і у мене без цих махінацій усе працює


    std::cout << "\tH\bel\flo, \\Wo\'r\"ld!\n" << std::endl;
    std::cout << "My n\ram\?e is D\\enis" << std::endl;
    std::cout << "Я вчу різні мови програмування!" << std::endl;


    return 0;
}
