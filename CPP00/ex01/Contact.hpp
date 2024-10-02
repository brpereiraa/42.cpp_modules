#include <iostream>
#include <string>

class Contact {
	private:
		std::string fname;
		std::string lname;
		std::string nickname;
		std::string secret;
		int			number;

	public:
		Contact();
		Contact(std::string fname, std::string lname, std::string nickname, std::string secret, int number);
		std::string get_fname();
		std::string get_lname();
		std::string get_nickname();
		std::string get_secret();
		int			get_number(); 
};