/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:36:11 by clara             #+#    #+#             */
/*   Updated: 2024/02/09 18:25:48 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "Character.hpp"

class Cure : public AMateria
{
	public:

		Cure();
		Cure(Cure const& src);
		~Cure();

		Cure&	operator=(Cure const& rhs);
		Cure*	clone() const;
		void	use(ICharacter& target);

};

#endif