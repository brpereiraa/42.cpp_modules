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

        static int swap(std::vector<int> *vec, int index, int len);


	public:
		static int printTime();
		static int sortDeque(std::string line);
		static int sortVector(std::vector<int> *vec);
};
