/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:45:35 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/19 18:45:39 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define START_TEST(num) std::cout << "START TEST: "#num << std::endl;
#define FINISH_TEST(num) std::cout << "FINISH TEST: "#num << std::endl;

void    testFour(void)
{
    START_TEST(4);
    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* i = new WrongCat();
                                                   
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    meta->makeSound();
    delete meta;
    delete i;
    FINISH_TEST(4);
}

void    testOne(void)
{
    START_TEST(1);
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
                                                   
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;    
    delete i;
    FINISH_TEST(1);
}

void    testTwo(void) {
    START_TEST(2);
    Animal  a;
    Dog     b;
    Cat     c;

    std::cout << a.getType() << " " << b.getType() << " " << c.getType() << std::endl;
    a = b;
    std::cout << "Animal " << a.getType() << std::endl;
    a = c;
    std::cout << "Animal " << a.getType() << std::endl;
    FINISH_TEST(2);
}

void    testThree(void)
{
    START_TEST(3);
    Animal  *a;
    Dog     b;
    Cat     c;

    std::cout << b.getType() << " " << c.getType() << std::endl;
    a = &b;
    std::cout << "Animal " << a->getType() << std::endl;
    a = &c;
    std::cout << "Animal " << a->getType() << std::endl;
    FINISH_TEST(3);
}


int main()
{
    testOne();
    testTwo();
    testThree();
    testFour();
    return 0;
}
