/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:31:03 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/25 15:31:44 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOT_FORM_HPP
# define ROBOT_FORM_HPP

# include "AForm.hpp"
# include "cstdlib"

class RobotomyRequestForm : public AForm {
private:
	const std::string	target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &copy);
	RobotomyRequestForm	&operator=(const RobotomyRequestForm &a);
	virtual ~RobotomyRequestForm();

	virtual void	execute(const Bureaucrat &executor) const;
};
#endif
