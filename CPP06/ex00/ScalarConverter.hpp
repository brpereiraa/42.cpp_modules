#pragma once

#include <iostream>
#include <string>
#include <climits>
#include <iomanip>
#include <cstdlib>
#include <cctype>

class ScalarConverter {
public:
    ScalarConverter();
    ~ScalarConverter();

    static void convert(std::string str);

    class ImpossibleExcept : public std::exception {
    public:
        virtual const char *what() const throw();
    };

private:
    // Helper functions
    static int isCharDisplayable(char c);
    static bool isValidDouble(std::string str);
    static bool isValidFloat(std::string str);
    static int hasIntOverflow(std::string str);
    static bool hasValidSignal(std::string str);

    // Print methods
    static void printAll(char c, int i, float f, double d);
    static void printImpossible(float f, double d);

    // Conversion methods
    static void convertFromChar(std::string str);
    static void convertFromInt(std::string str);
    static void convertFromFloat(std::string str);
    static void convertFromDouble(std::string str);
};