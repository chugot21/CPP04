/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:16:37 by clara             #+#    #+#             */
/*   Updated: 2024/02/07 19:43:34 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor" << std::endl;
    this->_type = "Cat";
	this->_CatBrain = new Brain();
}

Cat::Cat(Cat const& src) : Animal(src)
{
	std::cout << "Cat copy constructor" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
	delete this->_CatBrain;
}

Cat&	Cat::operator=(Cat const& rhs)
{
	this->_type = rhs._type;
	this->_CatBrain = rhs._CatBrain;
	return *this;
}

void    Cat::makeSound() const
{
    std::cout << "Miaaaaouuuuu !" << std::endl;
}