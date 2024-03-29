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
# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
	private:

		AMateria	*_stock[4];
		
	public:

		MateriaSource();
		MateriaSource(MateriaSource const& src);
		virtual ~MateriaSource();
		MateriaSource& operator=(MateriaSource const& rhs);

		AMateria	*getmateria(int idx) const;
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

};

#endif