/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:42:50 by clara             #+#    #+#             */
/*   Updated: 2024/02/09 18:23:58 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:

		Ice();
		Ice(Ice const& src);
		~Ice();

		Ice&    operator=(Ice const& rhs);
		Ice*	clone() const;
		void	use(ICharacter& target);

};

#endif