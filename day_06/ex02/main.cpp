/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 19:23:32 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/25 19:35:53 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stdlib.h>
#include <iostream>

#define UNUSED __attribute__((__unused__))

Base *gen(void)
{
	switch (std::rand() % 3) {
		case 0: return dynamic_cast<Base *>(new A());
		case 1: return dynamic_cast<Base *>(new B());
		case 2: return dynamic_cast<Base *>(new C());
		default:return NULL;
	}
	return NULL;
}

void    identify(Base *p)
{
    if (dynamic_cast<A *>(p) != NULL)
        std::cout << "class A" << std::endl;
    else if (dynamic_cast<B *>(p) != NULL)
        std::cout << "class B" << std::endl;
    else if (dynamic_cast<C *>(p) != NULL)
        std::cout << "class C" << std::endl;
}

void    identify(Base &p)
{
    std::cout << "class ";
    try
    {
        UNUSED A    &a = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        return ;
    }
    catch (std::exception &a) { }
    try
    {
        UNUSED B    &b = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        return ;
    }
    catch (std::exception &a) { }
    try
    {
        UNUSED C    &c = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        return ;
    }
    catch (std::exception &a) { }
}

int main()
{
	srand(time(NULL));
	Base *base[5];
	for (int i = 0; i < 5; i++)
		base[i] = gen();
	std::cout << "Indentity with pointer" << std::endl;
	for (int i = 0; i < 5; i++)
		identify(base[i]);
	std::cout << "Indentity with reference" << std::endl;
	for (int i = 0; i < 5; i++)
		identify(*base[i]);
}
