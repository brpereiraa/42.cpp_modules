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
	
	fname = Phonebook::getInput("Add first name: ");
	lname = Phonebook::getInput("Add last name: ");
	nickname = Phonebook::getInput("Add nickname: ");
	secret = Phonebook::getInput("Add secret: ");
	number = Phonebook::getInput("Add number: ");

	if (fname.empty() || lname.empty() || nickname.empty() || secret.empty() || number.empty() ){
		std::cout << "Empty variable found. Contact couldn't be created" << std::endl;
		return ;
	}

	std::cout << std::endl;
	Phonebook::insert(new Contact(fname, lname, nickname, secret, number));	
}

void Phonebook::search(){
	int	input;

	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|" << std::endl;

	for (int i=0; i<8; i++){
		std::cout << std::setw(10) << i << "|";
		this->printString(this->contacts[i].get_fname()); 
		this->printString(this->contacts[i].get_lname()); 
		this->printString(this->contacts[i].get_nickname()); 
		std::cout << std::endl;
	}

	std::cout << std::endl;

	std::cout << "Choose an index for more information: "; 
	std::cin >> input; 
	std::cin.ignore();

	if (input < 0 || input > 7){
		std::cout << "Invalid input..." << std::endl;
		return ;
	}

	std::cout << "First Name: " << this->contacts[input].get_fname() << std::endl;
	std::cout << "Last Name: " << this->contacts[input].get_lname() << std::endl;
	std::cout << "Nickname: " << this->contacts[input].get_nickname() << std::endl;
	std::cout << "Secret: " << this->contacts[input].get_secret() << std::endl;
	std::cout << "PhoneNumber: " << this->contacts[input].get_number() << std::endl;

	std::cout << std::endl;
}

void Phonebook::insert(Contact *contact){
	this->contacts[this->index] = *contact;
	index = (index+1) % 8;
}

std::string Phonebook::getInput(std::string msg){
	std::string var;

	if (std::cin.eof())
		return ("Juan");
	
	std::cout << msg << std::endl;
	std::getline(std::cin, var);

	if (std::cin.eof())
		return ("Juan");

	return (var);	
}

void Phonebook::printString(std::string msg){
	if (msg.length() > 10){
		msg.resize(9);
		msg.append(".");
	}

	std::cout << std::setw(10) << msg << "|";
}
