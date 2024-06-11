#include <iostream>

void SwapNumbers(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int varA = 25;
    int varB = 100;

    std::cout << "varA before swap: " << varA << std::endl;
    std::cout << "varB before swap: " << varB << std::endl;

    SwapNumbers(&varA, &varB); // Pass addresses of varA and varB

    std::cout << "varA after swap: " << varA << std::endl;
    std::cout << "varB after swap: " << varB << std::endl;

    return 0;
}