#include <iostream>

int main() {
    
const int MAX_DIMENSION = 3;
    
    int rows, cols;

    
    std::cout << "Enter the number of rows (1-3): ";
    std::cin >> rows;

    
    while (rows < 1 || rows > MAX_DIMENSION) {
        std::cout << "Invalid input. Please enter a value between 1 and 3 for rows: ";
        std::cin >> rows;
    }

    std::cout << "Enter the number of columns (1-3): ";
    std::cin >> cols;

    
    while (cols < 1 || cols > MAX_DIMENSION) {
        std::cout << "Invalid input. Please enter a value between 1 and 3 for columns: ";
        std::cin >> cols;
    }

    
    double** array = new double*[rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new double[cols];
    }

    
    std::cout << "Enter values for the array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "Enter value for element [" << i << "][" << j << "]: ";
            std::cin >> array[i][j];
        }
    }

    
    std::cout << "Array values:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    
    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}