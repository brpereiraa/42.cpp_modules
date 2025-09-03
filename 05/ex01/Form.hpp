#pragma once

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string name;
		const int signGrade;
		const int execGrade;
		bool sign;

	public:
		Form();
		Form(std::string name, int execGrade, int signGrade);
		~Form();
		Form(const Form &other);

		std::string	getName() const;
		bool		getSign() const;
		int			getSignGrade() const;
		int			getExecGrade() const;
		
		void beSigned(Bureaucrat &other);

		Form &operator=(const Form &other);

		class GradeTooHighException : public std::exception {
			public:
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char *what() const throw();
		};
		
};

std::ostream &operator<<(std::ostream o, const Bureaucrat &other);
