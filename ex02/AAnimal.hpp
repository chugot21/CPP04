/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:02:32 by clara             #+#    #+#             */
/*   Updated: 2024/02/09 15:49:51 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>
# include "Brain.hpp"

class AAnimal
{
	protected:

		std::string	_type;

	public:

		AAnimal();
		AAnimal(AAnimal const& src);
		virtual ~AAnimal();

		AAnimal&	operator=(AAnimal const& rhs);

		virtual void		makeSound() const = 0;
		virtual std::string	getType() const;

};

#endif