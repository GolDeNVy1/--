#include <iostream>

//     int globalVariable;

// void Function1()
// {
//     int a;
// }
// void Function2()
// {
//     int b;
// }

// int main() {
//     int a = 10;
//     {
//         int b = 20;
//         std::cout << "b: " << b << std::endl;
//     }
// return 0;

// }

int arr[3];

void Function1()
{
    std::cout << "Function1: " << arr[0] << std::endl;
}
void Function2()
{
    std::cout << "Function2: " << arr[1] << std::endl;
}

int main()
{
    std::cout << "Main: " << arr[2] << std::endl;
    Function1();
    Function2();
    return 0;
}
