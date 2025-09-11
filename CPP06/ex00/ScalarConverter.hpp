#ifndef SCALACONVERTER_HPP
# define SCALACONVERTER_HPP

#include <iostream>
#include <string>

class ScalarConverter {
        private:
				ScalarConverter();
				~ScalarConverter();
				ScalarConverter(const ScalarConverter &scala);

        static int isPrint(const std::string &str);
				static int isFloat(const std::string &str);

        public:
                static void convert(const std::string &str); 

};

#endif
