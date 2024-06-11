#include <iostream>

double calculateSquareArea(double sideLength);
double calculateRectangleArea(double length, double width);
double calculateTriangleArea(double base, double height);

int main() {
    while (true) {
        int choice;
        double area;

        std::cout << "Please select the area of the shape to calculate:" << std::endl;
        std::cout << "1. Square" << std::endl;
        std::cout << "2. Rectangle" << std::endl;
        std::cout << "3. Triangle" << std::endl;
        std::cout << "4. Quit program" << std::endl;
        std::cout << "Enter Selection: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                double sideLength;
                std::cout << "Enter the side length of the square: ";
                std::cin >> sideLength;
                area = calculateSquareArea(sideLength);
                std::cout << "The area of the square is: " << area << std::endl;
                break;
            }
            case 2: {
                double length, width;
                std::cout << "Enter the length of the rectangle: ";
                std::cin >> length;
                std::cout << "Enter the width of the rectangle: ";
                std::cin >> width;
                area = calculateRectangleArea(length, width);
                std::cout << "The area of the rectangle is: " << area << std::endl;
                break;
            }
            case 3: {
                double base, height;
                std::cout << "Enter the base length of the triangle: ";
                std::cin >> base;
                std::cout << "Enter the height of the triangle: ";
                std::cin >> height;
                area = calculateTriangleArea(base, height);
                std::cout << "The area of the triangle is: " << area << std::endl;
                break;
            }
            case 4:
                std::cout << "Exiting program..." << std::endl;
                return 0;
            default:
                std::cout << "Invalid selection. Please try again." << std::endl;
        }
    }

    return 0;
}

double calculateSquareArea(double sideLength) {
    return sideLength * sideLength;
}

double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}
