#pragma once

template <typename T>
typename T::iterator easyfind(T t, int nbr){
    typename T::iterator iter = t.begin();

    while (iter != t.end()){
        if (iter == nbr)
            return iter;
    }

    return nullptr;
};
