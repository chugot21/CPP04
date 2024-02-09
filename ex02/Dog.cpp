/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:20:47 by clara             #+#    #+#             */
/*   Updated: 2024/02/09 15:52:28 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : AAnimal()
{
	std::cout << "Dog constructor" << std::endl;
    this->_type = "Dog";
	this->_DogBrain = new Brain();
}

Dog::Dog(Dog const& src) : AAnimal(src)
{
	std::cout << "Dog copy constructor" << std::endl;
	this->_type = src.getType();
	this->_DogBrain = new Brain(*src.getBrain());
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
	delete this->_DogBrain;
}

Dog&	Dog::operator=(Dog const& rhs)
{
	this->_type = rhs.getType();
	if (this->_DogBrain)
		delete this->_DogBrain;
	this->_DogBrain = new Brain(*rhs.getBrain());
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