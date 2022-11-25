/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:36:12 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/25 17:37:56 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConvert.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		std::cerr << "Number of arguments bot equal 1!" << std::endl;
	else
	{
		try {
			ScalarConvert convert;
			convert.printConvert(argv[1]);
		}
		catch (const std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
