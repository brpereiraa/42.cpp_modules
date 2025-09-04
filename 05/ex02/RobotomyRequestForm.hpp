#include "AForm.hpp"
# include <ctime>
# include <cstdlib>
	
class RobotomyRequestForm : public AForm {
	private:
		static const int signGrade = 145;
		static const int execGrade = 137;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &other);

		void executor() const;
};
