/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:20:07 by clara             #+#    #+#             */
/*   Updated: 2024/02/07 19:16:55 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain*	_DogBrain;

	public:

		Dog();
		Dog(Dog const& src);
		~Dog();

		Dog&	operator=(Dog const& rhs);
        void    makeSound() const;
};

#endif