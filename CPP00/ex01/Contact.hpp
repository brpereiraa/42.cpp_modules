#include <iostream>
#include <string>

class Contact {
	private:
		std::string	fname;
		std::string	lname;
		std::string	nickname;
		std::string	secret;
		std::string	number;

	public:
		Contact();
		Contact(std::string fname, std::string lname, std::string nickname, std::string secret, std::string number);
		std::string	get_fname();
		std::string	get_lname();
		std::string	get_nickname();
		std::string	get_secret();
		std::string	get_number(); 
};
