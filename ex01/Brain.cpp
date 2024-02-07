/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:04:48 by clara             #+#    #+#             */
/*   Updated: 2024/02/07 19:12:06 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor" << std::endl;
}

Brain::Brain(Brain const& src)
{
	std::cout << "Brain copy constructor" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}

Brain&	Brain::operator=(Brain const& rhs)
{
	this->_ideas[100] = rhs._ideas[100];
	return *this;
}