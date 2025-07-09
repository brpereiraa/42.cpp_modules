#include "Bureaucrat.hpp"
#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"

int main() {
    try {
        std::cout << BLUE << "\n=== Test 1: Bureaucrat Grade Changes ===" << RESET << std::endl;
        Bureaucrat b1("Alice", 1);
        Bureaucrat b2("Bob", 150);
        std::cout << CYAN << b1 << RESET << std::endl;
        std::cout << CYAN << b2 << RESET << std::endl;

        b1.decrementGrade();
        std::cout << GREEN << "After decrement: " << b1 << RESET << std::endl;

        b2.incrementGrade();
        std::cout << GREEN << "After increment: " << b2 << RESET << std::endl;

        std::cout << BLUE << "\n=== Test 2: Exception on Grade Too High (Charlie) ===" << RESET << std::endl;
        Bureaucrat b3("Charlie", 0);
    } catch (std::exception &e) {
        std::cout << RED << "Exception: " << e.what() << RESET << std::endl;
    }

    try {
        std::cout << BLUE << "\n=== Test 3: Exception on Grade Too Low (Dave) ===" << RESET << std::endl;
        Bureaucrat b4("Dave", 151);
    } catch (std::exception &e) {
        std::cout << RED << "Exception: " << e.what() << RESET << std::endl;
    }

    return 0;
}