/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:46:40 by clara             #+#    #+#             */
/*   Updated: 2024/02/12 11:56:21 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_stock[i] = 0;
	return;
}

MateriaSource::MateriaSource(MateriaSource const& src)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_stock[i])
			delete this->_stock[i];
		if (src.getmateria(i))
			this->_stock[i] = src.getmateria(i);
		else
			this->_stock[i] = 0;
	}
	return;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_stock[i])
			delete this->_stock[i];
	}
}

MateriaSource& MateriaSource::operator=(MateriaSource const& rhs)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_stock[i])
			delete this->_stock[i];
		if (rhs.getmateria(i))
			this->_stock[i] = rhs.getmateria(i);
		else
			this->_stock[i] = 0;
	}
	return *this;
}

AMateria	*MateriaSource::getmateria(int idx) const
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "Wrong index" << std::endl;
		return 0;
	}
	if (!this->_stock[idx])
	{
		std::cout << "No materia on this index" << std::endl;
		return 0;
	}
	return this->_stock[idx];
}

void MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;

	if (!m)
	{
		std::cout << "Materia doesn't exist" << std::endl;
		return;
	}
	else if (this->_stock[0] && this->_stock[1] && this->_stock[2] && this->_stock[3])
	{
		std::cout << "Stock is full" << std::endl;
		return;
	}
	else
	{
		while (this->_stock[i])
			i++;
		this->_stock[i] = m;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_stock[i]->getType() == type && this->_stock[i] != 0)
			return this->_stock[i]->clone();
	}
	return 0;
}