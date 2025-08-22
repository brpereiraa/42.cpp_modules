#include <iostream>
#include "Data.hpp"
#include "Serialize.hpp"

int main() {
    Data *ptr = new Data(10);
	Data *deserial = NULL;
	uintptr_t	serial;
	
	std::cout << "Data ptr: " << ptr << " Nbr: " << ptr->nbr << std::endl;
	serial = Serializer::serialize(ptr);
	std::cout << "uintptr_t: " << serial << std::endl;
	deserial = Serializer::deserialize(serial);
	std::cout << "Data ptr: " << deserial << " Nbr: " << deserial->nbr << std::endl;

	delete deserial;

	return (0);
}
