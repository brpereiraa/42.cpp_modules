#pragma once

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
		const std::string name;
		const int signGrade;
		const int execGrade;
		bool sign;
		const std::string target;

	public:
		AForm();
		AForm(std::string name, int execGrade, int signGrade, std::string target);
		virtual ~AForm();
		AForm(const AForm &other);

		std::string	getName() const;
		std::string getTarget() const;
		bool		getSign() const;
		int			getSignGrade() const;
		int			getExecGrade() const;
		
		void beSigned(Bureaucrat &other);

		void execute(Bureaucrat const &executor) const;
		virtual void executor() const = 0;

		AForm &operator=(const AForm &other);

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
