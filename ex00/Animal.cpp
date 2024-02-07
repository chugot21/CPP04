/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:14:56 by clara             #+#    #+#             */
/*   Updated: 2024/02/07 18:40:41 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(Animal const& src)
{
	std::cout << "Animal copy constructor" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

Animal&	Animal::operator=(Animal const& rhs)
{
	this->_type = rhs._type;
	return *this;
}

std::string	Animal::getType() const
{
    return this->_type;
}

void	Animal::makeSound() const
{
	std::cout << "*Sound of an animal*" << std::endl;
}