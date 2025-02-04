#include <iostream>

int main() {
    // const int SIZE1 = 5, SIZE2 = 3;
    // int arr1[SIZE1], arr2[SIZE2];

    // for (int i = 0; i < SIZE1; i++) {
    //     arr1[i] = i + i;
    // }

    // for (int i = 0; i < SIZE2; i++) {
    //     arr2[i] = i + i;
    // }

    // for (int i = 0; i < SIZE1; i++) {
    //     std::cout << arr1[i] << " ";
    // }
    // std::cout << std::endl;

    // for (int i = 0; i < SIZE2; i++) {
    //     std::cout << arr2[i] << " ";
    // }
    // std::cout << std::endl;

    // int Multiple(int a, int b);
    // {
    //     return a * b;
    // }

    // double ToCube (double number);
    // {
    //     double cube = number * number * number;
    //     return ;
    // }

    // double GetPI();
    // {
    //     double PI = 3.14159;
    //     return 3.14159;
    // }

    // double radius = 3.0;
    // double area = GetPI() * radius * radius;

    int arr[3] = {1, 2, 3};
    int a = 10;

    A(arr, 3);
    B(a);

    std::cout << arr[0] << " " << a << std::endl;

    return 0;
}

void B (int a)
{
    a = 3;
}

void A (int arr[], int size)
{
    B(arr[0]);
}