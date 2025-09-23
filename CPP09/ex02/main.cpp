#include "PmergeMe.hpp"

// int toDeque(int ac, char **av){
//
// }

int toVector(int ac, char **av, std::vector<int> *vec){
	std::string t;

	for(int i = 1; i < ac ; i++){
		if (av[i][0] == '+' || av[i][0] == '-')
			return (std::cout << "Invalid number found " << t << std::endl, 0);
		if (std::atoi(av[i]) == 0 && std::string(av[i]) != "0")
			return (std::cout << "Couldnt convert number " << t << std::endl, 0);
		vec->push_back(std::atoi(av[i]));
	}

	std::vector<int>::iterator it;

	for (it = vec->begin(); it != vec->end(); it++){
		std::cout << *it << std::endl;
	}

	return (1);
}

int main(int ac, char **av){
	std::vector<int> vec;
	toVector(ac, av, &vec);

	PmergeMe::sortVector(&vec);	


	return 0;
}
