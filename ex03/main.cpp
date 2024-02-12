/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:36:43 by clara             #+#    #+#             */
/*   Updated: 2024/02/12 12:23:55 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
    //tests fonctions MateriaSource
    /*IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;*/

    //test fonctions Character (floor, inv et )
    
    ICharacter* me = new Character("me");
    AMateria*   m1 = new Ice();
    AMateria*   m2 = new Ice();
    AMateria*   m3 = new Cure();
    AMateria*   m4 = new Cure();
    AMateria*   m5 = new Ice();
    me->equip(m1);
    me->equip(m2);
    me->equip(m3);
    me->equip(m4);
    me->equip(m5);
    me->unequip(0);
    me->use(1, *me);
    me->use(2, *me);
    me->use(3, *me);
    delete m1;
    delete m2;
    delete m3;
    delete m4;
    delete m5;
    delete me;


    //test Materia clone, basics Ice's and Cure's fonctions
    /*AMateria* ice = new Ice();
    AMateria* cure = new Cure();
    AMateria* clone = ice->clone();
    ICharacter* bob = new Character("Bob");
    ice->use(*bob);
    cure->use(*bob);
    clone->use(*bob);
    delete bob;
    delete ice;
    delete cure;
    delete clone;*/
    
    return 0;
}