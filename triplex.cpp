#include<iostream>

// Main function
int main() {
    // Print welcome message
    std::cout << "You are trapped in a infinite door universe! But you are a brave agent!" << std::endl;
    std::cout << "Enter the secret combination code to continue to next door..." << std::endl;

    // Declare 3 number code
    const int a = 4;
    const int b = 2;
    const int c = 7;

    int sum = a + b + c;
    int product = a * b * c;

    // Print sum and product
    std::cout << "There are 3 numbers in the code" << std::endl;
    std::cout << "The codes add-up to: " << sum << std::endl;
    std::cout << "The codes multiply to give: " << product << std::endl;

    return 0;
}