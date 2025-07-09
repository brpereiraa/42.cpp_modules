#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"

int main() {
    try {
        std::cout << BLUE << "\n=== Test 1: Alice signs FormA ===" << RESET << std::endl;
        Bureaucrat b1("Alice", 50);
        Form f1("FormA", 100, 50);
        std::cout << CYAN << b1 << RESET << std::endl;
        std::cout << CYAN << f1 << RESET << std::endl;
        b1.signForm(f1);
        std::cout << GREEN << "After signing: " << f1 << RESET << std::endl;

        std::cout << BLUE << "\n=== Test 2: Bob tries to sign FormB (should fail) ===" << RESET << std::endl;
        Bureaucrat b2("Bob", 120);
        Form f2("FormB", 100, 50);
        std::cout << CYAN << b2 << RESET << std::endl;
        std::cout << CYAN << f2 << RESET << std::endl;
        b2.signForm(f2);
        std::cout << YELLOW << "After Bob tries to sign: " << f2 << RESET << std::endl;
    } catch (std::exception &e) {
        std::cout << RED << "Exception: " << e.what() << RESET << std::endl;
    }
    return 0;
}