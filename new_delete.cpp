#include <iostream>

// void func()
// {
//     int* a = new int{ 5 };

//     std::cout << *a << std::endl;
//     std::cout << a << std::endl;

//     *a = 10;

//     std::cout << *a << std::endl;

// }
//     int* CreateVariable(int value);

int main() {
    // func();
    // new double** a = new double*;

    // std::cout << a << std::endl;
    // std::cout << *a << std::endl;
    // int* ptr = CreateVariable(10);

    // delete ptr;


    // int* ptr1 = CreateVariable(20);

    // delete ptr1;

    // std::cout << "Enter size: ";
    // int size;
    // std::cin >> size;

    // const int* arr = new const int[size] {3, 4};

    // for (int i = 0; i < size; ++i)
    // {
    //     std::cout << arr[i] << " ";
    // }
    // std::cout << std::endl;

    std::cout << "Enter rows: ";
    int rows;
    std::cin >> rows;

    std::cout << "Enter columns: ";
    int columns;
    std::cin >> columns;

    int** arr = new int* [rows];
    for (int i = 0; i < rows; ++i)
    {
        arr[i] = new int[columns]{};
    }

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < rows; ++i)
    {
        delete[] arr[i];
    } delete[] arr;

return 0;
}

// int* CreateVariable(int value)
// {
//     return new int{ value };
// }

void Show(const int* arr[][5], int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}