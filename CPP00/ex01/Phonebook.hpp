#include "./Contact.hpp"
#include <cstdlib>
#include <iomanip>

class Phonebook {
	private:
		Contact contacts[8];
		int index;

	public:
		Phonebook();

		void		insert(Contact *contact);
		void		add();
		void		search();
		void		exit();
		std::string	getInput(std::string var);
		void		printString(std::string msg);
};
