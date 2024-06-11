#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>


int countVowels(const std::string& text) {
    int count = 0;
    for (char c : text) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            count++;
        }
    }
    return count;
}

int countWords(const std::string& text) {
    int count = 0;
    bool inWord = false;
    for (char c : text) {
        if (isspace(c)) {
            inWord = false;
        } else if (!inWord) {
            count++;
            inWord = true;
        }
    }
    return count;
}
std::string reverse(const std::string& text) {
    return std::string(text.rbegin(), text.rend());
}


std::string capitalizeSecondLetter(const std::string& text) {
    std::string result = text;
    bool capitalizeNext = false;
    for (char& c : result) {
        if (isalpha(c)) {
            if (capitalizeNext) {
                c = toupper(c);
                capitalizeNext = false;
            } else {
                capitalizeNext = true;
            }
        } else {
            capitalizeNext = false;
        }
    }
    return result;
}

int main() {
    
    std::ifstream file("textfile.txt");
    if (!file.is_open()) {
        std::cerr << "Failed to open the file." << std::endl;
        return 1;
    }

    
    std::string fileData;
    std::getline(file, fileData);

    
    file.close();

    
    std::cout << "Number of vowels in the text file: " << countVowels(fileData) << std::endl;

    
    std::cout << "Number of words in the text file: " << countWords(fileData) << std::endl;


    std::cout << "Reverse of the text: " << reverse(fileData) << std::endl;

    
    std::cout << "Text with second letter capitalized: " << capitalizeSecondLetter(fileData) << std::endl;

    return 0;
}