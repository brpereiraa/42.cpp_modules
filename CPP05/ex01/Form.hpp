#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
        private:
            bool flag;
            const std::string name;
            const int signGrade;
            const int execGrade;

        public:
            Form();
            Form(std::string name, int signGrade, int execGrade);
            Form(const Form &obj);
            ~Form();

            Form &operator=(const Form &form);

            const std::string getName() const;
            bool getFlag() const;
            int getExecGrade() const;
            int getSignGrade() const;

            void beSigned(Bureaucrat &bureau);

            class GradeTooHighException : public std::exception {
                public:
                    const char *what() const throw();
            };

            class GradeTooLowException : public std::exception { 
                public:
                    const char *what() const throw();
            };
};

std::ostream &operator<<(std::ostream &out, const Form &obj);

#endif
