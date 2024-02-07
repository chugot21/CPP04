/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:15:19 by clara             #+#    #+#             */
/*   Updated: 2024/02/07 18:43:10 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
	public:

		Cat();
		Cat(Cat const& src);
		~Cat();

		Cat&	operator=(Cat const& rhs);
        void    makeSound() const;
};

#endif