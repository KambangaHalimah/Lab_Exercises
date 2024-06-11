#include <iostream>
#include "Rectangle.h"

int main() {
    Rectangle rect;

    float len, wid;

    std::cout << "Enter length: ";
    std::cin >> len;

    std::cout << "Enter width: ";
    std::cin >> wid;

    rect.setLength(len);
    rect.setWidth(wid