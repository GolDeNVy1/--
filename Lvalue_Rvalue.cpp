#include <iostream>

int main() {
    int var = 10;
    //int* bad_addr = &(var + 1);
    int* addr = &var;
    //&var = 40;

    return 0;
}