/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:11:03 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/12 17:18:36 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string strconst("HI THIS IS BRAIN");
	std::string *strptr = &strconst;
	std::string &strref = strconst;

	std::cout << &strconst << std::endl;
	std::cout << strptr << std::endl;
	std::cout << &strref << std::endl;

	std::cout << strconst << std::endl;
	std::cout << *strptr << std::endl;
	std::cout << strref << std::endl;
	return 0;
}
