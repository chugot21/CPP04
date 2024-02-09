/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:14:56 by clara             #+#    #+#             */
/*   Updated: 2024/02/09 12:43:41 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal")
{
	std::cout << "AAnimal constructor" << std::endl;
}

AAnimal::AAnimal(AAnimal const& src)
{
	std::cout << "AAnimal copy constructor" << std::endl;
	*this = src;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor" << std::endl;
}

AAnimal&	AAnimal::operator=(AAnimal const& rhs)
{
	this->_type = rhs._type;
	return *this;
}

std::string	AAnimal::getType() const
{
    return this->_type;
}

void	AAnimal::makeSound() const
{
	std::cout << "*Sound of an animal*" << std::endl;
}