/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:31:32 by clara             #+#    #+#             */
/*   Updated: 2024/02/07 18:51:00 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Wrong Animal")
{
	std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& src)
{
	std::cout << "WrongAnimal copy constructor" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& rhs)
{
	this->_type = rhs._type;
	return *this;
}

std::string	WrongAnimal::getType() const
{
    return this->_type;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "*Sound of an animal*" << std::endl;
}