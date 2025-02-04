#include <iostream>

int main() {
    // int a = 5;
    // int b = 10;
    // int* p;



    // p = &a;
    // *p = 0;
    // std::cout << &a << std::endl;
    // std::cout << p << std::endl;
    // std::cout << *p << std::endl;
    // std::cout << a << std::endl;


    // p = &b;
    // std::cout << &b << std::endl;
    // std::cout << p << std::endl;
    // std::cout << *p << std::endl;
    // std::cout << b << std::endl;

    // int a = 10;
    // int* p = &a;

    // std::cout << p << std::endl;
    // std::cout << *p << std::endl;
    // std::cout << &p << std::endl;


    // const int SIZE = 5;
    // int arr[SIZE] = { 1, 2, 3, 4, 5 };

    // int* p = arr; 

    // for (int i = 0; i < SIZE; i++) {
    //     arr[i] = 10 * i + i * 3;
    //     std::cout << arr[i] << " ";
    // }
    // std::cout << std::endl;

    // for (int i = 0; i < SIZE; i++) {
    //     std::cout << p[i] << " ";
    // }
    // std::cout << std::endl;

    // std::cout << &"Hello" << std::endl;
    // func();


    // int CountLength(const char* str);

    // int main() {
    //     const char STR[] = "Hello World";
    //     std::cout << CountLength(STR);
    //     return 0;
    // }

    // int CountLength(const char* str) {
    //     int length = 0;
    //     while (*str++ != '\0') {
    //         length++;
    //     }
    //     return length;
    // }

    // double Func1(int); 
    // double Func2(int); 
    // double Func3(int); 

    // double (*arr[3]) (int) = { Func1, Func2, Func3}; 
    // for (int i = 0; i < 3; i++) {

    //     std::cout << *arr[i] << " ";
    // }

    int arr2 [3][5] = { 0 };
    int (*ptr) [5] = arr2; 
        for (int i = 0; i < 3; i++) 
        { 
        for (int j=0; j < 5; j++) 
            std::cout << *(*(ptr + 1) + j) << " ";
        } 
            std::cout << std::endl;
    return 0;
}

// void func() {
//     std::cout << &"Hello" << std::endl;
// }