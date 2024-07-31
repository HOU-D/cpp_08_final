/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:25:46 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/07/22 16:08:24 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
       
        Span sp = Span(10000);
        std::vector<int> src;

        int i = 0;
        std::cout << "src = { ";
        while(i < 10)
        {
            src.push_back(i);
            std::cout << src[i] << " ";
            i++;
        }
        std::cout << "}" << std::endl;
        std::cout << "---------------------" << std::endl;

        sp.addNumber(10000);
        sp.addNumber(100);
        sp.addNumber(10);

        sp.printElements();
        std::cout << "---------------------" << std::endl;

        sp.add_range(src);
        sp.printElements();
        std::cout << "---------------------" << std::endl;

        std::cout << "short = "<<  sp.shortestSpan() << std::endl;
        std::cout << "---------------------" << std::endl;

        std::cout << "long = " << sp.longestSpan() << std::endl;
    }
    catch (const std::runtime_error &e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}