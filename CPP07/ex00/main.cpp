#include "whatever.hpp"
#include <iostream>

int main()
{
	{
		int a = 2;
		int b = 3;

		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	std::cout << std::endl;
	{
		char a = 'a';
		char z = 'z';

		swap(a, z);
		std::cout << "a = " << a << ", z = " << z << std::endl;
		std::cout << "min = " << min(a, z) << std::endl;
		std::cout << "max = " << max(a, z) << std::endl;
	}
	return 0;
}