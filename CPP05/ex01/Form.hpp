#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include "Bureaucrat.hpp"

class Form {
        private:
                const std::string name; 
                bool flag;

        public:
                Form();
                Form(std::string name);
                Form(const Form &obj);
                ~Form();

                const std::string getName() const;
                const bool getFlag() const;

                void beSigned(Bureaucrat &obj);
};

#endif
