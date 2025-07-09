#ifndef SCALACONVERTER_HPP
# define SCALACONVERTER_HPP

#include <iostream>
#include <string>

class ScalarConverter {
        private:
				ScalarConverter();
				~ScalarConverter();
				ScalarConverter(const ScalarConverter &scala);

                void isPrint(const std::string &str);

        public:
                static void convert(const std::string &str); 

};

#endif
