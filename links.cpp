#include <iostream>

int& Min(int arr[], int size) {
    int min = arr[0];
    int minIndex = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
    }   
    return arr[minIndex];
}
int main() {

    // int variable = 10;
    // const int CONST = 20;

    // int* p;

    // p = &variable;

    // int* ptr1 = &variable;
    // int& ref1 = variable;

    // const int* ptr2 = &CONST;
    // const int& ref2 = CONST;

    // variable = 50;
    // *ptr1 = 100;
    // ref1 = 200;

    // std::cout << CONST << std::endl;
    // std::cout << *ptr2 << std::endl;
    // std::cout << ref2 << std::endl;

    // int a = 10;
    // const int b = 10;

    // int& ref1 = a;
    // const int& ref2 = b;

    // const int& ref = 200;

    // const int&& ref3 = 200;

    // std::cout << ref3 << std::endl;

    // int a = 10;
    // int* p = &a;

    // int*& ref = p;
    // *ref = 5;

    // std::cout << ref << " = " << p << std::endl;
    // std::cout << &ref << " = " << &p << std::endl;

    // int arr[5] = {1, 2, 3, 4, 5};

    // int* p = arr;

    // int (&ref)[5] = arr;

    // for (size_t i = 0; i < 5; i++)
    // {
    //     std::cout << ref[i] << std::endl;
    // }

    // int arr[] = {1, 2, 3};
    // int size = 3;

    // Show(arr, size);

    int arr[] = {1, 2, 3};
    int size = 3;

    Min(arr, size) = 50;

    return 0;
}

// void Show(const int* arr, int size) {

// }


