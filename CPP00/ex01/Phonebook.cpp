#include "./Phonebook.hpp"
#include <iostream>
#include <string>

void Phonebook::add(){
	std::string fname;
	std::string lname;
	std::string nickname;
	std::string secret;
	int			number;
	
	std::cout << "Add first name: "; 
	std::cin >> fname; 
	std::cout << "Add last name: "; 
	std::cin >> lname; 
	std::cout << "Add nickname: "; 
	std::cin >> nickname;
	std::cout << "Add secret: "; 
	std::cin >> secret;
	std::cout << "Add number: ";
	std::cin >> number;
	std::cout << std::endl;

}

void Phonebook::search(){

}