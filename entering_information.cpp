#include <iostream>

int main() {
    
    // int number;

    // std::cout << "Enter a number: ";
    // std::cin >> number;
    // std::cout << "You entered: " << number << std::endl;

    // int a;

    // std::cout << "a = " << a << std::endl;
    // std::cin >> a;
    // std::cout << "a = " << a << std::endl;

    // int number1, number2;
    // int sum;

    // std::cout << "Enter number1: ";
    // std::cin >> number1;
    // std::cout << "Enter number2: ";
    // std::cin >> number2;
    
    // sum = number1 + number2;

    // std::cout << number1 << " + " << number2 << " = " << sum << std::endl;
    
    // int number1, number2;

    // std::cout << "Enter two numbers: ";
    // std::cin >> number1 >> number2;
    
    // int sum = number1 + number2;

    // std::cout << number1 << " + " << number2 << " = " << sum << std::endl;


    // int side;

    // std::cout << "Enter the side of a square: " << std::endl;
    // std::cin >> side;
    

    // int perimeter = side * 4;
    // std::cout << "Perimeter: " << perimeter << std::endl;

    // int area = side * side;
    // std::cout << "Area: " << area << std::endl;

    // int side1, side2;

    // std::cout << "Enter sides of a rectangle: " << std::endl;
    // std::cin >> side1 >> side2;
    

    // int perimeter = 2 * (side1 + side2);
    // std::cout << "Perimeter: " << perimeter << std::endl;

    // int area = side1 * side2;
    // std::cout << "Area: " << area << std::endl;

    double r;
    double PI = 3.14;
    

    std::cout << "Enter the radius of a circle: ";
    std::cin >> r;
    
    double c = 2 * PI * r;
    double s = PI * r * r;
    double d = 2 * r;

    std::cout << "Diameter: " << d << std::endl;
    std::cout << "Circumference: " << c << std::endl;
    std::cout << "Area: " << s << std::endl;

    return 0;

}