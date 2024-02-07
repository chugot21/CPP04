/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:04:52 by clara             #+#    #+#             */
/*   Updated: 2024/02/07 19:09:38 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
	private:

		std::string _ideas[100];

	public:

		Brain();
		Brain(Brain const& src);
		~Brain();

		Brain&	operator=(Brain const& rhs);

};

#endif