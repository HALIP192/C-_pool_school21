/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:14:07 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/26 16:14:55 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main()
{
    Span sp = Span(10);
    /* const uint   arr[] = { 1, 2, 3, 4, 5 }; */

    try
    {
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (std::exception &obj)
    {
        std::cerr << obj.what() << std::endl;
    }
    try
    {
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &obj)
    {
        std::cerr << obj.what() << std::endl;
    }
    try
    {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        /* sp.addArrayNumbers(arr, 5); */
        sp.printArray();
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        sp.addNumber(10);
    }
    catch (std::exception &obj)
    {
        std::cerr << obj.what() << std::endl;
    }
    try
    {
        std::cout << "My tests:" << std::endl;
        Span    new_span(10);
        std::vector<uint> arr(10);
        for (uint i = 0; i < 10; ++i)
            arr[i] = i;
        new_span.addNumber(arr.begin(), arr.end());
        new_span.printArray();
        std::cout << new_span.shortestSpan() << std::endl;
        std::cout << new_span.longestSpan() << std::endl;
        new_span.addNumber(10);
    }
    catch (std::exception &obj)
    {
        std::cerr << obj.what() << std::endl;
    }
    return 0;
}
