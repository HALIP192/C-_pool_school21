/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:21:42 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/26 16:22:00 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"


int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Top element: " <<  mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Size: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << "Values in stack: " << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << "Check reverse iterators:" << std::endl;
    MutantStack<int>::riterator rit = mstack.rbegin();
    MutantStack<int>::riterator rite = mstack.rend();
    ++it;
    --it;
    std::cout << "Values in stack: " << std::endl;
    while (rit != rite)
    {
        std::cout << *rit << std::endl;
        ++rit;
    }

    return 0;
}

