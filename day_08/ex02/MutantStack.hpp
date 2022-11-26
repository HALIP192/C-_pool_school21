/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:21:28 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/26 16:21:36 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>
# include <iterator>

template <class T, class Container = std::deque<T> >
class   MutantStack : public std::stack<T, Container>
{
public:
    using   std::stack<T, Container>::c;
    typedef typename std::stack<T, Container>::container_type::iterator iterator;
    typedef typename std::stack<T, Container>::container_type::const_iterator citerator;
    typedef typename std::stack<T, Container>::container_type::reverse_iterator riterator;
    typedef typename std::stack<T, Container>::container_type::const_reverse_iterator criterator;

    iterator   begin(void)
    {
        return c.begin();
    }

    iterator  end(void)
    {
        return c.end();
    }

    citerator   cbegin(void) const
    {
        return c.cbegin();
    }
                           
    citerator  cend(void) const
    {
        return c.cend();
    }

    riterator   rbegin(void)
    {
        return c.rbegin();
    }
                             
    riterator  rend(void)
    {
        return c.rend();
    }
                             
    criterator   crbegin(void) const
    {
        return c.crbegin();
    }
                           
    criterator  crend(void) const 
    {
        return c.crend();
    }
};

#endif
