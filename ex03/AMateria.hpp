/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:23:56 by clara             #+#    #+#             */
/*   Updated: 2024/02/12 11:39:49 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include <cstring>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:

        std::string _type;
    
    public:

        AMateria(std::string const & type);
        AMateria(AMateria const&  src);
        virtual ~AMateria();

        AMateria&   operator=(AMateria const& rhs);
    
        std::string const&  getType() const;
        void                setType(std::string type);
        virtual AMateria*   clone() const = 0;
        virtual void        use(ICharacter& target);
};

#endif