/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 19:00:55 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/19 19:00:56 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define START_TEST(num) std::cout << "START TEST: "#num << std::endl;
#define FINISH_TEST(num) std::cout << "FINISH TEST: "#num << std::endl;


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

void    testTwo(void)
{
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

void    testFour(void)
{
    START_TEST(4);
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;
    Dog     b;
    Ani[2;2R[3;1R[>0;95;0c]10;rgb:c7f1/c7f2/c7f2]11;rgb:0000/0000/0000mal  *a = &b;
    std::cout << "Start test 4" << std::endl;
    std::cout << a->getType() << std::endl;
    b.setIdea(0, "I'm dog?");
    Dog     c = b;
    std::cout << c.getIdea(0) << std::endl;
    Cat     d;
    Animal  *a2 = &d;
    std::cout << a2->getType() << std::endl;
    Cat     value = d;
    std::cout << value.getIdea(0) << std::endl;
    FINISH_TEST(4);
}

int main()
{
//    testOne();
//    testTwo();
//    testThree();
    testFour();
    return 0;
}
