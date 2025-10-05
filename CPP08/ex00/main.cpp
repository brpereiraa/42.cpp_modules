#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main() {
    try {
        int arr[] = {1, 2, 3, 4, 5};
        std::vector<int> vec(arr, arr + 5);

        int arr2[] = {10, 20, 30, 40, 50};
        std::list<int> lst(arr2, arr2 + 5);

        std::cout << "Testing vector:" << std::endl;
        std::vector<int>::iterator it1 = easyfind(vec, 3);
        std::cout << "Found: " << *it1 << std::endl;

        std::cout << "Testing list:" << std::endl;
        std::list<int>::iterator it2 = easyfind(lst, 40);
        std::cout << "Found: " << *it2 << std::endl;

        std::cout << "Testing missing number:" << std::endl;
        easyfind(vec, 9); // should throw
    }
    catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
