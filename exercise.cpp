#include <iostream>
#include <string>

int main() {
    
    int* int_ptr = new int;

    
    std::string* str_ptr = new std::string;

    
    std::cout << "Enter an integer: ";
    std::cin >> *int_ptr;

    
    std::cin.ignore();  
    std::cout << "Enter a string: ";
    std::getline(std::cin, *str_ptr);


    std::cout << "You entered integer: " << *int_ptr << std::endl;
    std::cout << "You entered string: " << *str_ptr << std::endl;

    
    delete int_ptr;
    delete str_ptr;

    return 0;
}