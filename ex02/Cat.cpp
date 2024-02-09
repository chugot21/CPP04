/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:16:37 by clara             #+#    #+#             */
/*   Updated: 2024/02/09 15:52:04 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : AAnimal()
{
	std::cout << "Cat constructor" << std::endl;
    this->_type = "Cat";
	this->_CatBrain = new Brain();
}

Cat::Cat(Cat const& src) : AAnimal(src)
{
	std::cout << "Cat copy constructor" << std::endl;
	this->_type = src.getType();
	this->_CatBrain = new Brain(*src.getBrain());
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
	delete this->_CatBrain;
}

Cat&	Cat::operator=(Cat const& rhs)
{
	this->_type = rhs.getType();
	if (this->_CatBrain)
		delete this->_CatBrain;
	this->_CatBrain = new Brain(*rhs.getBrain());
	return *this;
}

void    Cat::makeSound() const
{
    std::cout << "Miaaaaouuuuu !" << std::endl;
}

Brain	*Cat::getBrain() const
{
	return(this->_CatBrain);
}