#include "./Phonebook.hpp"
#include <iostream>
#include <string>

Phonebook::Phonebook(){ this->index = 0; };

void Phonebook::add(){
	Contact		contact;
	std::string	fname;
	std::string	lname;
	std::string	nickname;
	std::string	secret;
	std::string	number;
	
	std::cout << "Add first name: "; 
	std::getline(std::cin, fname); 
	std::cout << "Add last name: "; 
	std::getline(std::cin, lname); 
	std::cout << "Add nickname: "; 
	std::getline(std::cin, nickname); 
	std::cout << "Add secret: "; 
	std::getline(std::cin, secret);
	std::cout << "Add number: ";
	std::getline(std::cin, number); 
	std::cout << std::endl;

	if(fname.empty() || lname.empty() || nickname.empty() || secret.empty() || number.empty()){
		std::cout << "Empty fields detected. Contact not added" << std::endl;
		return ;
	}
	Phonebook::insert(new Contact(fname, lname, nickname, secret, number));	
}

void Phonebook::search(){
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|" << std::endl;

	for (int i=0; i<8; i++){
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << this->contacts[i].get_fname() << "|";
		std::cout << std::setw(10) << this->contacts[i].get_lname() << "|";
		std::cout << std::setw(10) << this->contacts[i].get_nickname() << "|";
		std::cout << std::endl;
	}
}

void Phonebook::insert(Contact *contact){
	this->contacts[this->index] = *contact;
	index = (index+1) % 8;
}
