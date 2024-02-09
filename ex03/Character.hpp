/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:43:39 by clara             #+#    #+#             */
/*   Updated: 2024/02/09 21:59:25 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AMateria.hpp"

class ICharacter
{
	protected:

		std::string	_name;
		AMateria	*(_inv[4]);
		AMateria	*(_floor[100]);

	public:

		ICharacter(std::string name);
		ICharacter(ICharacter const& src);
		virtual ~ICharacter();
		ICharacter&	operator=(ICharacter const& rhs);

		virtual std::string const & getName() const = 0;
		AMateria	*getmateria(int idx) const;
		AMateria	*getmateriafloor(int idx) const;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif