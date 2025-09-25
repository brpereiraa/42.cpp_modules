#include "PmergeMe.hpp"

int PmergeMe::swap(std::vector<int> *vec, int index, int len) {
    int tmp;

    for (int i = 0; i < len; i++) {
        int left  = index + i;
        int right = index + len + i;  

        if (left < (int)vec->size() && right < (int)vec->size()) {
            std::cout << "Swapping values " 
                      << (*vec)[left] << " and " << (*vec)[right] << std::endl;

            tmp = (*vec)[left];
            (*vec)[left] = (*vec)[right];
            (*vec)[right] = tmp;
        }
    }

    std::vector<int>::iterator it;
    std::cout << "Vector after swap: ";
    for (it = vec->begin(); it != vec->end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}

int PmergeMe::sortVector(std::vector<int> *vec) {
    for (int k = 0; k + 1 < (int)vec->size(); k += 2) {
        if ((*vec)[k] > (*vec)[k + 1]) {
            int tmp = (*vec)[k];
            (*vec)[k] = (*vec)[k + 1];
            (*vec)[k + 1] = tmp;
        }
    }

	for (int i = 2; i <= vec->size() / 2; i *= 2){
        for (int j = 0; j <= vec->size(); j += i * 2){
            if ((*vec)[j + i -1] > (*vec)[j + (i * 2) - 1])
                swap(vec, j, i);
        }
	} 
	return 1;
}

