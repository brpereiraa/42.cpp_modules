#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {
	private:
		static const int signGrade = 145;
		static const int execGrade = 137;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &other);

        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

		void executor() const;

};
