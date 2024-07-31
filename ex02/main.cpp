/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:26:18 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/07/18 14:26:19 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
     MutantStack<int> mstack;

    for (int i = 5 ; i < 10; i++)
        mstack.push(i);

    MutantStack<int>::iterator Begin = mstack.begin();
    MutantStack<int>::iterator End = mstack.end();

    std::cout << "stack:  {";
    while (Begin != End)
    {
        std::cout << *Begin;
        ++Begin;
        if (Begin != End)
            std::cout << ',';
    }
    std::cout << '}' << std::endl;

    std::cout << "top is: "<< mstack.top() << std::endl;
    std::cout << "---------------------" << std::endl;

    std::cout << "size  befor pop  : " << mstack.size() << std::endl;
    std::cout << "---------------------" << std::endl;

    mstack.pop();

    std::cout << "size  after pop  : " << mstack.size() << std::endl;

    std::cout << "---------------------" << std::endl;

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;

    std::cout << *it << std::endl;
    std::cout << "---------------------" << std::endl;

    std::cout << "stack:  {";
    while (it != ite)
    {
        
        std::cout << *it;
        ++it;
        if (it != ite)
            std::cout << ',';
    }
    std::cout << '}'<< std::endl;

    std::cout << "---------------------" << std::endl;

    MutantStack<int>::iterator ito = mstack.begin();
    MutantStack<int>::iterator iteo = mstack.end();

    std::cout << "stack:  {";
    while (ito != iteo)
    {
        *ito = *ito + 2;
        std::cout << *ito;
        ++ito;
        if (ito != iteo)
            std::cout << ',';
    }
    std::cout << '}'<< std::endl;

    std::cout << "---------------------" << std::endl;

    MutantStack<int>::const_iterator  itt = mstack.begin();
    MutantStack<int>::const_iterator  itte = mstack.end();

    std::cout << "stack:  {";
    while (itt != itte)
    {
        //*itt = *itt + 1;
        std::cout << *itt;
        ++itt;
        if (itt != itte)
            std::cout << ',';
    }

    std::cout << '}'<< std::endl;
    std::cout << "---------------------" << std::endl;

    MutantStack<int>::reverse_iterator r = mstack.rbegin();
    MutantStack<int>::reverse_iterator ri = mstack.rend();

    std::cout << "stack:  {";
    while(r != ri)
    {
        *r = *r + 2;
        std::cout << *r;
        ++r;
        if (r != ri)
            std::cout << ',';
    }
    std::cout << '}'<< std::endl;
    std::cout << "---------------------" << std::endl;

    MutantStack<int>::const_reverse_iterator riu = mstack.rbegin();
    MutantStack<int>::const_reverse_iterator rii = mstack.rend();

    std::cout << "stack:  {";
    while(riu != rii)
    {
        //*riu = *riu + 2;
        std::cout << *riu;
        ++riu;
        if (riu != rii)
            std::cout << ',';
    }
    std::cout << '}'<< std::endl;

    return 0;
}