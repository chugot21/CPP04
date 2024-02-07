/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:20:47 by clara             #+#    #+#             */
/*   Updated: 2024/02/07 18:43:24 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor" << std::endl;
    this->_type = "Dog";
}

Dog::Dog(Dog const& src) : Animal(src)
{
	std::cout << "Dog copy constructor" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}

Dog&	Dog::operator=(Dog const& rhs)
{
	this->_type = rhs._type;
	return *this;
}

void    Dog::makeSound() const
{
    std::cout << "Ouaf ouaf !" << std::endl;
}