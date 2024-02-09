/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:38:10 by clara             #+#    #+#             */
/*   Updated: 2024/02/09 22:03:29 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

ICharacter::ICharacter(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inv[i] = 0;
	for (int j = 0; j < 100; j++)
		this->_floor[j] = 0;
	return;
}

ICharacter::ICharacter(ICharacter const& src) : _name(src.getName())
{
	for (int j = 0; j < 100; j++)
	{
		if (this->_floor[j])
			delete this->_floor[j];
		if (src.getmateriafloor(j))
			this->_floor[j] = src.getmateriafloor(j);
		else
			this->_floor[j] = 0;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_inv[i])
			delete this->_inv[i];
		if (src.getmateria(i))
			this->_inv[i] = src.getmateria(i);
		else
			this->_inv[i] = 0;
	}
	return;
}

ICharacter::~ICharacter()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inv[i])
			delete this->_inv[i];
	}
	for (int j = 0; j < 100; j++)
	{
		if (this->_floor[j])
			delete this->_floor[j];
	}
}

ICharacter&	ICharacter::operator=(ICharacter const& rhs)
{
	this->_name = rhs.getName();
	for (int j = 0; j < 100; j++)
	{
		if (this->_floor[j])
			delete this->_floor[j];
		if (rhs.getmateriafloor(j))
			this->_floor[j] = rhs.getmateriafloor(j);
		else
			this->_floor[j] = 0;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_inv[i])
			delete this->_inv[i];
		if (rhs.getmateria(i))
			this->_inv[i] = rhs.getmateria(i);
		else
			this->_inv[i] = 0;
	}
	return *this;
}

std::string const& ICharacter::getName() const
{
	return this->_name;
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

AMateria	*ICharacter::getmateriafloor(int idx) const
{
	if (idx < 0 || idx >= 100)
	{
		std::cout << "Wrong index for materia on floor" << std::endl;
		return;
	}
	if (!this->_floor[idx])
	{
		std::cout << "No materia on floor on this index" << std::endl;
		return;
	}
	return this->_floor[idx];
}

void ICharacter::equip(AMateria* m)
{
	int i = 0;

	if (!m)
	{
		std::cout << "Materia doesn't exist" << std::endl;
		return;
	}
	else if (this->_inv[0] && this->_inv[1] && this->_inv[2] && this->_inv[3])
	{
		std::cout << "Inventory is full" << std::endl;
		return;
	}
	else
	{
		while (this->_inv[i])
			i++;
		this->_inv[i] = m;
	}
}

void ICharacter::unequip(int idx)
{
	int i = 0;

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
	while(this->_floor[i])
		i++;
	this->_floor[i] = this->_inv[idx]; 
	this->_inv[idx] = 0;
}

void ICharacter::use(int idx, ICharacter& target)
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
	this->_inv[idx]->use(target);
}