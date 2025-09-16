#include "ScalarConverter.hpp"

// Constructors & Destructor
ScalarConverter::ScalarConverter() { std::cout << "ScalarConverter default constructor called" << std::endl; }
ScalarConverter::~ScalarConverter() { std::cout << "ScalarConverter destructor called" << std::endl; }

// Exception class for impossible conversions
const char *ScalarConverter::ImpossibleExcept::what() const throw() {
    return "Impossible to convert";
}

// Helper functions
int ScalarConverter::isCharDisplayable(char c) {
    return (c >= 32 && c <= 126) ? 1 : 0;
}

bool ScalarConverter::isValidDouble(std::string str) {
    size_t dot_pos = str.find_first_of('.');
    return (dot_pos == str.find_last_of('.') && std::isdigit(str[dot_pos + 1]) &&
            str.find_first_not_of("0123456789+.-") == std::string::npos);
}

bool ScalarConverter::isValidFloat(std::string str) {
    size_t f_pos = str.find_first_of('f');
    return (std::isdigit(str[f_pos - 1]) && str.find_first_of('.') == str.find_last_of('.') &&
            str.find_first_not_of("0123456789f.-+") == std::string::npos && f_pos == str.length() - 1);
}

int ScalarConverter::hasIntOverflow(std::string str) {
    double value = std::strtod(str.c_str(), NULL);
    return (value > INT_MAX || value < INT_MIN) ? 1 : 0;
}

bool ScalarConverter::hasValidSignal(std::string str) {
    if (str.find_first_of('+') == str.find_last_of('+') && (str.find_first_of('+') == 0 || str.find_first_of('+') == std::string::npos))
        if (str.find_first_of('-') == std::string::npos)
            return true;
    if (str.find_first_of('-') == str.find_last_of('-') && (str.find_first_of('-') == 0 || str.find_first_of('-') == std::string::npos))
        if (str.find_first_of('+') == std::string::npos)
            return true;
    return false;
}

// Print methods
void ScalarConverter::printAll(char c, int i, float f, double d) {
    if (d < -128 || d > 127)
        std::cout << "char: Overflows" << std::endl;
    else {
        if (ScalarConverter::isCharDisplayable(c))
            std::cout << "char: '" << c << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    }
    if (d > INT_MAX || d < INT_MIN) {
        std::cout << "int : Overflows" << std::endl;
        std::cout << "float: " << f << "f" << std::endl;
        std::cout << "double: " << d << std::endl;
    } else {
        std::cout << "int: " << i << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
        std::cout << "double: " << d << std::endl;
    }
}

void ScalarConverter::printImpossible(float f, double d) {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << f << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
}

// Conversion methods
void ScalarConverter::convertFromChar(std::string str) {
    char c = str[0];
    int i = static_cast<int>(c);
    float f = static_cast<float>(c);
    double d = static_cast<double>(c);
    printAll(c, i, f, d);
}

void ScalarConverter::convertFromInt(std::string str) {
    int i = std::atoi(str.c_str());
    char c = static_cast<unsigned char>(i);
    float f = static_cast<float>(i);
    double d = static_cast<double>(i);
    printAll(c, i, f, d);
}

void ScalarConverter::convertFromFloat(std::string str) {
    float f = std::atof(str.c_str());
    int i = static_cast<int>(f);
    char c = static_cast<unsigned char>(f);
    double d = static_cast<double>(f);
    printAll(c, i, f, d);
}

void ScalarConverter::convertFromDouble(std::string str) {
    double d = std::strtod(str.c_str(), NULL);
    int i = static_cast<int>(d);
    char c = static_cast<unsigned char>(d);
    float f = static_cast<float>(d);
    printAll(c, i, f, d);
}

void ScalarConverter::convert(std::string str) {
    int overflow_check = hasIntOverflow(str);
    bool is_signal = hasValidSignal(str);

    if (str == "nan" || str == "-inf" || str == "+inf") {
        double d = std::strtod(str.c_str(), NULL);
        float f = static_cast<float>(d);
        printImpossible(f, d);
        return;
    } else if (str == "-inff" || str == "+inff") {
        float f = std::strtof(str.c_str(), NULL);
        double d = static_cast<double>(f);
        printImpossible(f, d);
        return;
    }

    if (is_signal) {
        if (str.length() == 1 && !std::isdigit(str[0]))
            convertFromChar(str);
        else if (str.find_first_not_of("0123456789+-") == std::string::npos && overflow_check == 0)
            convertFromInt(str);
        else if (isValidDouble(str))
            convertFromDouble(str);
        else if (isValidFloat(str))
            convertFromFloat(str);
        else
            throw ImpossibleExcept();
    } else {
        throw ImpossibleExcept();
    }
}
