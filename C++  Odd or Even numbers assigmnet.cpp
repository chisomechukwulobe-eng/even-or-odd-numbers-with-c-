#include <iostream>

int main() {
    int number;

    // Ask user to input a number
    std::cout << "Enter an integer: ";

    // Read input and check if the number entered is valid
    if (std::cin >> number) {
        if (number % 2 == 0) {
            std::cout << number << " is an even number" << std::endl;
        } else {
            std::cout << number << " is an odd number" << std::endl;
        }
    } else {
        std::cout << "Error: That is not a valid integer." << std::endl;
    }
  
    return 0;
}