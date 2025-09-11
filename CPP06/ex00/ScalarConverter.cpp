#include "./ScalarConverter.hpp"
#include <string>
#include <cstdlib>   // atoi, atof
#include <cctype>    // isprint
#include <iostream>

int ScalarConverter::isPrint(const std::string &str) {
    int value = std::atoi(str.c_str());
    return (value >= 32 && value <= 126);
}

int ScalarConverter::isFloat(const std::string &str) {
    if (str[str.length() - 1] == 'f' &&
        str != "nanf" && str != "+inff" && str != "-inff") {
        return true;
    }
    return false;
}

void ScalarConverter::convert(const std::string &str) {
    if (str == "nan" || str == "nanf") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
    else if (str == "-inf" || str == "+inf") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << str << "f" << std::endl;
        std::cout << "double: " << str << std::endl;
    }
    else if (str == "-inff" || str == "+inff") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << str << std::endl;
        std::cout << "double: " << str.substr(0, str.size() - 1) << std::endl;
    }
    else if (isPrint(str)) {
        int value = std::atoi(str.c_str());
        std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
        std::cout << "int: " << value << std::endl;
        std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
    }
    else if (isFloat(str)) {
        float value = static_cast<float>(std::atof(str.c_str()));
        std::cout << "char: " 
                  << (std::isprint(static_cast<int>(value)) 
                      ? std::string("'") + static_cast<char>(value) + "'" 
                      : "Non displayable")
                  << std::endl;
        std::cout << "int: " << static_cast<int>(value) << std::endl;
        std::cout << "float: " << value << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
    }
    else {
        double value = std::atof(str.c_str());
        std::cout << "char: " 
                  << (std::isprint(static_cast<int>(value)) 
                      ? std::string("'") + static_cast<char>(value) + "'" 
                      : "Non displayable")
                  << std::endl;
        std::cout << "int: " << static_cast<int>(value) << std::endl;
        std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
        std::cout << "double: " << value << ".0" << std::endl;
    }
}
