/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:02:32 by clara             #+#    #+#             */
/*   Updated: 2024/02/07 18:39:47 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
	protected:

		std::string	_type;

	public:

		Animal();
		Animal(Animal const& src);
		~Animal();

		Animal&	operator=(Animal const& rhs);

		virtual void		makeSound() const;
		virtual std::string	getType() const;

};

#endif