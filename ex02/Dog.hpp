/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:20:07 by clara             #+#    #+#             */
/*   Updated: 2024/02/09 15:52:38 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "AAnimal.hpp"

class Dog : public AAnimal
{
	private:
		Brain*	_DogBrain;

	public:

		Dog();
		Dog(Dog const& src);
		~Dog();

		Dog&	operator=(Dog const& rhs);
        void    makeSound() const;
		Brain*	getBrain() const;
};

#endif