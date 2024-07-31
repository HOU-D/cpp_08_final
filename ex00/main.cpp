/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:45:29 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/07/22 14:45:38 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    try 
    {
        std::vector<int> myvector;
        myvector.push_back(5);
        myvector.push_back(15);
        myvector.push_back(9);
        myvector.push_back(55);
        myvector.push_back(555);

        easyfind(myvector, 555); 
        easyfind(myvector, 6);

    }
    catch (const std::runtime_error &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {

        std::list<int> mylist;
        mylist.push_back(5);
        mylist.push_back(15);
        mylist.push_back(30);
        mylist.push_back(55);
        mylist.push_back(555);

        easyfind(mylist, 30); 
        easyfind(mylist, 60); 
    }
    catch (const std::runtime_error &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
