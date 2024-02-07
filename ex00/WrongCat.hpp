/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:30:09 by clara             #+#    #+#             */
/*   Updated: 2024/02/07 18:44:02 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:

		WrongCat();
		WrongCat(WrongCat const& src);
		~WrongCat();

		WrongCat&	operator=(WrongCat const& rhs);
        void    	makeSound() const;
};

#endif