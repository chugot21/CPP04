/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:02:32 by clara             #+#    #+#             */
/*   Updated: 2024/02/09 15:48:22 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include "Brain.hpp"

class Animal
{
	protected:

		std::string	_type;

	public:

		Animal();
		Animal(Animal const& src);
		virtual ~Animal();

		Animal&	operator=(Animal const& rhs);

		virtual void		makeSound() const;
		virtual std::string	getType() const;

};

#endif