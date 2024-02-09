/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:36:07 by clara             #+#    #+#             */
/*   Updated: 2024/02/09 18:26:44 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    return;
}

Cure::Cure(Cure const& src) : AMateria(src.getType())
{
    return;
}

Cure::~Cure()
{
}

Cure&    Cure::operator=(Cure const& rhs)
{
    this->_type = rhs.getType();
    return *this;
}

Cure*   Cure::clone() const
{
    Cure twincure(*this);
	return &twincure;
}

void	Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}