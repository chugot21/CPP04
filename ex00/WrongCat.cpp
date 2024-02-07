/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:29:30 by clara             #+#    #+#             */
/*   Updated: 2024/02/07 18:44:07 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat constructor" << std::endl;
    this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const& src) : WrongAnimal(src)
{
	std::cout << "WrongCat copy constructor" << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const& rhs)
{
	this->_type = rhs._type;
	return *this;
}

void    WrongCat::makeSound() const
{
    std::cout << "Miaaaaouuuuu !" << std::endl;
}