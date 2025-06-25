#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat {
	private:
		std::string name;
		int grade;

	public:
		Bureaucrat();
		Bureaucrat(	std::string name, int grade);
		Bureaucrat(const Bureaucrat &bureau);
		~Bureaucrat();

		Bureaucrat &operator=(const Bureaucrat &bureau);

    void Increment(); 
    void Decrement(); 
    void signForm(); 

    const std::string getName() const;
    const int         getGrade() const;
		
		class GradeTooHighException : public std::exception {
			public:
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception { 
			public:
				const char *what() const throw();
		};

};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj);

#endif
