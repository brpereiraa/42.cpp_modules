#include "./Contact.hpp"

Contact::Contact(){};

Contact::Contact(std::string fname, std::string lname, std::string nickname, std::string secret, int number){
	this->fname = fname;
	this->lname = lname;
	this->nickname = nickname;
	this->secret = secret;
	this->number = number;
}

std::string Contact::get_fname(){ return (this->fname); };
std::string Contact::get_lname(){ return (this->lname); };
std::string Contact::get_nickname(){ return (this->nickname); };
std::string Contact::get_secret(){ return (this->secret); };
int Contact::get_number(){ return (this->number); };