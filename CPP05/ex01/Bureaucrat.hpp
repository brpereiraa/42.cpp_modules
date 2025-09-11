#pragma once

#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
	private:
		const std::string name;
		int grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();

		Bureaucrat(const Bureaucrat &cp);
		Bureaucrat &operator=(const Bureaucrat &other);

		std::string getName() const;
		int getGrade() const;

		void incrementGrade();
		void decrementGrade();

		void signForm(Form &other);

		class GradeTooHighException : public std::exception {
			public:
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char *what() const throw();
		};

};

std::ostream &operator <<(std::ostream &out, const Bureaucrat &other);
