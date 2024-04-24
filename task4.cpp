#include <iostream>
#include <limits> 

using namespace std;

int main() {
  int userInput;

  while (true) {
    cout << "Enter an integer value between 5 and 10: ";

    while (!(cin >> userInput)) {
      cout << "Sorry, you entered an invalid number. Please try again: ";
      cin.clear(); 
      cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    }

    if (userInput >= 5 && userInput <= 10) {
      break; 
    } else {
      cout << "You entered " << userInput << ", please enter a number between 5 and 10: ";
    }
  }

  cout << "Your input value (" << userInput << ") has been accepted." << endl;


  return 0;
}