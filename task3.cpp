#include <iostream>
#include <string>

int main() {
    
    std::string elements[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};


    for (const std::string& element : elements) {

        if (element[0] == 'B') {
            
            std::cout << element << std::endl;
        }
    }

    return 0;
}