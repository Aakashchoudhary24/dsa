#include <iostream>

int main(){
    int firstNum, secondNum;
    
    // taking user input
    std::cout << "Enter first number: ";
    std::cin >> firstNum;

    std::cout << "Enter second number: ";
    std::cin >> secondNum;
 
    int sum = firstNum + secondNum;

    // displaying the sum
    std::cout << "Sum = " << sum << std::endl;

    return 0;
}
