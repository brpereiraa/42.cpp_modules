#pragma once

#include <iostream>
#include <stdexcept>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &t, int nbr){
	typename T::iterator it = std::find(t.begin(), t.end(), nbr);
	if (it != t.end())
		return it;
	throw std::invalid_argument("Number not found");

};
