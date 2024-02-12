/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:33:00 by clara             #+#    #+#             */
/*   Updated: 2024/02/12 11:49:03 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const& type) : _type(type)
{
	return;
}

AMateria::AMateria(AMateria const&  src)
{
	this->_type = src.getType();
	return;
}

AMateria::~AMateria()
{
}

AMateria&   AMateria::operator=(AMateria const& rhs)
{
	this->_type = rhs.getType();
	return *this;
}
	
std::string const&  AMateria::getType() const
{
	return this->_type;
}

void	AMateria::setType(std::string type)
{
	this->_type = type;
}

void        AMateria::use(ICharacter& target)
{
}