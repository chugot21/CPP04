/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:46:40 by clara             #+#    #+#             */
/*   Updated: 2024/02/09 22:16:24 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
}

IMateriaSource::IMateriaSource(IMateriaSource const& src)
{

}

IMateriaSource::~IMateriaSource()
{
}

IMateriaSource& IMateriaSource::operator=(IMateriaSource const& rhs)
{

}

AMateria	*ICharacter::getmateria(int idx) const
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "Wrong index" << std::endl;
		return;
	}
	if (!this->_inv[idx])
	{
		std::cout << "No materia on this index" << std::endl;
		return;
	}
	return this->_inv[idx];
}

void IMateriaSource::learnMateria(AMateria*)
{

}

AMateria* IMateriaSource::createMateria(std::string const & type)
{

}