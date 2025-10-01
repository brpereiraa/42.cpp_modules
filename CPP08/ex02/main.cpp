#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <vector>

int main()
{
    std::cout << "=== Testing MutantStack ===" << std::endl;
    
    // Test 1: Basic functionality and forward iteration
    std::cout << "\n--- Test 1: Basic functionality and forward iteration ---" << std::endl;
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    std::cout << "Stack size: " << mstack.size() << std::endl;
    std::cout << "Top element: " << mstack.top() << std::endl;
    
    std::cout << "Forward iteration: ";
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    // Test 2: Reverse iteration
    std::cout << "\n--- Test 2: Reverse iteration ---" << std::endl;
    std::cout << "Reverse iteration: ";
    for (MutantStack<int>::reverse_iterator it = mstack.rbegin(); it != mstack.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    // Test 3: Const iteration
    std::cout << "\n--- Test 3: Const iteration ---" << std::endl;
    const MutantStack<int> const_mstack = mstack;
    std::cout << "Const forward iteration: ";
    for (MutantStack<int>::const_iterator it = const_mstack.begin(); it != const_mstack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    std::cout << "Const reverse iteration: ";
    for (MutantStack<int>::const_reverse_iterator it = const_mstack.rbegin(); it != const_mstack.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    // Test 4: Comparison with std::list
    std::cout << "\n--- Test 4: Comparison with std::list ---" << std::endl;
    std::list<int> list;
    list.push_back(5);
    list.push_back(17);
    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    list.push_back(0);
    
    std::cout << "List iteration: ";
    for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    // Test 5: Stack operations
    std::cout << "\n--- Test 5: Stack operations ---" << std::endl;
    std::cout << "Before pop - Top: " << mstack.top() << ", Size: " << mstack.size() << std::endl;
    mstack.pop();
    std::cout << "After pop - Top: " << mstack.top() << ", Size: " << mstack.size() << std::endl;
    
    // Test 6: Different data types
    std::cout << "\n--- Test 6: Different data types ---" << std::endl;
    MutantStack<std::string> string_stack;
    string_stack.push("Hello");
    string_stack.push("World");
    string_stack.push("C++");
    string_stack.push("42");
    
    std::cout << "String stack iteration: ";
    for (MutantStack<std::string>::iterator it = string_stack.begin(); it != string_stack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    // Test 7: Copy constructor and assignment
    std::cout << "\n--- Test 7: Copy constructor and assignment ---" << std::endl;
    MutantStack<int> copy_stack(mstack);
    std::cout << "Copy stack iteration: ";
    for (MutantStack<int>::iterator it = copy_stack.begin(); it != copy_stack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    MutantStack<int> assigned_stack;
    assigned_stack = mstack;
    std::cout << "Assigned stack iteration: ";
    for (MutantStack<int>::iterator it = assigned_stack.begin(); it != assigned_stack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    // Test 8: Empty stack
    std::cout << "\n--- Test 8: Empty stack ---" << std::endl;
    MutantStack<int> empty_stack;
    std::cout << "Empty stack size: " << empty_stack.size() << std::endl;
    std::cout << "Empty stack iteration (should be empty): ";
    for (MutantStack<int>::iterator it = empty_stack.begin(); it != empty_stack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "(empty)" << std::endl;
    
    std::cout << "\n=== All tests completed successfully! ===" << std::endl;
    
    return 0;
}
