#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* f = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << f->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	f->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	delete f;
	return 0;
}