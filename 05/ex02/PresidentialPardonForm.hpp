#include "AForm.hpp"
#include <fstream>

class PresidentialPardonForm : public AForm {
	private:
		static const int signGrade = 145;
		static const int execGrade = 137;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &other);

		void executor() const;
};
