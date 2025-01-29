#ifndef BUREAUCRAT_H
# define BUREACRAT_H

# include <string>
# include <iostream>

class Bureaucrat {
	private:
		std::string name;
		int grade;

	public:
		Bureaucrat();
		Bureaucrat(	std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &bureau);

		Bureaucrat &operator=(const Bureaucrat &bureau);
		
		class GradeTooHighException : public std::exception {
			public:
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception { 
			public:
				const char *what() const throw();
		}

};


#endif