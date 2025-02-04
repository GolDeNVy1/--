#include <iostream>

int main() {
    const int SIZE = 3;

    int arr[SIZE];

    for (int index = 0; index < SIZE; index++)
        arr[index] = index + index;

    for (int index = 0; index < SIZE; index++)
        std::cout << "arr[" << index << "] = " << arr[index] << std::endl;
    
    return 0;

}