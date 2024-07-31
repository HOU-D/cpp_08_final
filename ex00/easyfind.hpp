#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm> 
#include <stdexcept> 

template <typename T>

void easyfind(T &container, int integer)
{
    typename T::iterator it = std::find(container.begin(), container.end(), integer);

    if (it == container.end())
    {
        std::cout << integer << ": ";
        throw std::runtime_error("not found!");
    }
    else
    {
        std::cout << "Element "<< *it << " found at index " << std::distance(container.begin(), it) << std::endl;
    }
}

#endif