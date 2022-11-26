/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:43:52 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/26 15:50:48 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main(void)
{
    std::vector<int> arr(5);

    for (unsigned int i = 0; i < 5; ++i)
        arr[i] = static_cast<int>(i);
    std::cout << *easyfind(arr, 3) << std::endl;
    if (easyfind(arr, 10) == arr.end())
        std::cout << "arr.end()" << std::endl;

    return 0;
}
