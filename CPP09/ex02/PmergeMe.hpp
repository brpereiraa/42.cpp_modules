#pragma once

#include <vector>
#include <iostream>
#include <cctype>
#include <sstream>
#include <string>

class PmergeMe {
	private:
		PmergeMe();
		PmergeMe(const PmergeMe &cp);
		~PmergeMe();


	public:
		static int printTime();
		static int sortDeque(std::string line);
		static int sortVector(std::vector<int> *vec);
};
