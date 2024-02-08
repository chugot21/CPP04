/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:20:47 by clara             #+#    #+#             */
/*   Updated: 2024/02/07 19:43:42 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor" << std::endl;
    this->_type = "Dog";
	this->_DogBrain = new Brain();
}

Dog::Dog(Dog const& src) : Animal(src)
{
	std::cout << "Dog copy constructor" << std::endl;
	this->_type = "Dog";
	this->_DogBrain = new Brain(*src.getBrain());
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
	delete this->_DogBrain;
}

Dog&	Dog::operator=(Dog const& rhs)
{
	this->_type = rhs._type;
	if (this->_DogBrain)
		delete this->_DogBrain;
	this->_DogBrain = new Brain(*rhs._DogBrain);
	return *this;
}

void    Dog::makeSound() const
{
    std::cout << "Ouaf ouaf !" << std::endl;
}

Brain*	Dog::getBrain() const
{
	return(this->_DogBrain);
}