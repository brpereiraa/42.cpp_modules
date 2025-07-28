#include <iostream>
using namespace std;

int main() {
    int n = 10;
  
    // Store the address of number in nptr
    int* nptr = &n;

    // Reinterpreting the pointer as a char pointer
    char* charptr = reinterpret_cast<char*>(nptr);

    // Printing the memory addresses and values
    printf("Integer Address: %p\n", nptr);
    printf("Char Address: %p", charptr);

    return 0;
}
