/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:34:50 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/13 17:44:00 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl    man;
    
    man.complain("debug");
    man.complain("error");
    man.complain("info");
    man.complain("warning");
    man.complain("asdf");
    man.complain("");
    return (0);
}
