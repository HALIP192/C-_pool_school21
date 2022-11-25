/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:02:58 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/25 20:06:47 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <class T, class C>
int iter(T *addr, size_t size, C f)
{
    for (size_t i = 0; i < size; ++i)
        f(addr[i]);
    return (0);
}

template <class T>
int iter(T *, size_t, std::nullptr_t)
{
    return (-1);
}
#endif
