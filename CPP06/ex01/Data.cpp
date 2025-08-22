#include "Data.hpp"

Data::Data() : nbr(0) {}

Data::Data(int nbr) : nbr(nbr) {}

Data::~Data() {}

Data::Data(const Data &other) :  nbr(other.nbr){ }

Data &Data::operator=(const Data &other) {
    if (this != &other)
        this->nbr = other.nbr;

    return *this;
}
