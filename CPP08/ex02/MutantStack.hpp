#pragma once

#include <stack>
#include <deque>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{
public:
    // Iterator typedefs - expose the underlying container's iterators
    typedef typename std::deque<T>::iterator iterator;
    typedef typename std::deque<T>::const_iterator const_iterator;
    typedef typename std::deque<T>::reverse_iterator reverse_iterator;
    typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;

    // Default constructor
    MutantStack() : std::stack<T, std::deque<T> >() {}

    // Copy constructor
    MutantStack(const MutantStack& other) : std::stack<T, std::deque<T> >(other) {}

    // Assignment operator
    MutantStack& operator=(const MutantStack& other) {
        if (this != &other) {
            std::stack<T, std::deque<T> >::operator=(other);
        }
        return *this;
    }

    ~MutantStack() {}

    iterator begin() {
        return this->c.begin();
    }

    iterator end() {
        return this->c.end();
    }

    const_iterator begin() const {
        return this->c.begin();
    }

    const_iterator end() const {
        return this->c.end();
    }

    reverse_iterator rbegin() {
        return this->c.rbegin();
    }

    reverse_iterator rend() {
        return this->c.rend();
    }

    const_reverse_iterator rbegin() const {
        return this->c.rbegin();
    }

    const_reverse_iterator rend() const {
        return this->c.rend();
    }
};
