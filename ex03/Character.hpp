/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:43:39 by clara             #+#    #+#             */
/*   Updated: 2024/02/12 11:47:27 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:

		std::string	_name;
		AMateria	*_inv[4];
		AMateria	*_floor[100];

	public:

		Character(std::string name);
		Character(Character const& src);
		virtual ~Character();
		Character&	operator=(Character const& rhs);

		std::string const & getName() const;
		AMateria	*getmateria(int idx) const;
		AMateria	*getmateriafloor(int idx) const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif