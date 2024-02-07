/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:32:02 by clara             #+#    #+#             */
/*   Updated: 2024/02/07 18:41:57 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
	protected:

		std::string	_type;

	public:

		WrongAnimal();
		WrongAnimal(WrongAnimal const& src);
		~WrongAnimal();

		WrongAnimal&	operator=(WrongAnimal const& rhs);

		void	makeSound() const;
		std::string	getType() const;

};

#endif