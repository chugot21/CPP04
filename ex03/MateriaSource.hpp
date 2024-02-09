/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:46:45 by clara             #+#    #+#             */
/*   Updated: 2024/02/09 22:16:30 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "AMateria.hpp"

class IMateriaSource
{
	protected:

		AMateria	*(_stock[4]);
		
	public:

		IMateriaSource();
		IMateriaSource(IMateriaSource const& src);
		virtual ~IMateriaSource();
		IMateriaSource& operator=(IMateriaSource const& rhs);

		AMateria	*getmateria(int idx) const;
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;

};

#endif