/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:46:01 by clara             #+#    #+#             */
/*   Updated: 2024/02/12 11:53:49 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    return;
}

Ice::Ice(Ice const& src) : AMateria(src.getType())
{
    return;
}

Ice::~Ice()
{
}

Ice&    Ice::operator=(Ice const& rhs)
{
    this->_type = rhs.getType();
    return *this;
}

Ice*   Ice::clone() const
{
    Ice *twinice = new Ice();
	return twinice;
}

void	Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}