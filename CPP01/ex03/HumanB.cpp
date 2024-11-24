HumanB::HumanB(){ std::cout << "Default constructor called" << std::endl; };

Human::~HumanB(){ std::cout << "Default destructor called" << std::endl; };

void	HumanB::attack(){
	std::cout << this->name << " attacks with their " << this->weapon << std::endl;
}
