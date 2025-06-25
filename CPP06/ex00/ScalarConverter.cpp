#include "./ScalarConverter.hpp"

void ScalarConverter::isPrint(const std::string &str){
	
}

void ScalarConverter::convert(const std::string &str){
		if (str.compare("nan") == 0 || str.compare("nanf") == 0){
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: nanf" << std::endl;
			std::cout << "double: nan" << std::endl;
        }

		else if (str.compare("-inf") == 0 || str.compare("+inf") == 0){

        }

		else if (str.compare("-inff") == 0 || str.compare("+inff") == 0){

        }

		else if (isPrint(str)){
			std::cout << "char: " <<  static_cast<char>(std::atoi(str.c_str())) << std::endl;
			std::cout << "int: " <<  std::atoi(str.c_str()) << std::endl;
			std::cout << "test: " <<  str.c_str() << std::endl;
		}
		else {
			std::cout << "char: " <<  static_cast<char>(std::atoi(str.c_str())) << std::endl;
			std::cout << "int: " <<  std::atoi(str.c_str()) << std::endl;
			std::cout << "test: " <<  str.c_str() << std::endl;
		}
}
