/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:21:47 by clara             #+#    #+#             */
/*   Updated: 2024/02/07 19:50:28 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	/*std::cout << "------Test creating animals------" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	i->makeSound();
	std::cout << i->getType() << std::endl;
	j->makeSound();
	std::cout << j->getType() << std::endl;

	delete j;
	delete i;*/

	std::cout << "-----Test 1 copy all caracteristics = ------" << std::endl;

	Cat tac;
	Dog god;

	Cat &ref_tac = tac;
	Dog &ref_god = god;

	Cat copy_cat(ref_tac);
	Dog copy_dog(ref_god);

	copy_cat.makeSound();
	std::cout << copy_dog.getType() << std::endl;

	/*std::cout << "-----Test array of Animals-----" << std::endl;
	Animal *(tab[20]);

	for(int i = 0; i < 5; i++)
		tab[i] = new Cat();
	for(int j = 5; j < 10; j++)
		tab[j] = new Dog();

	tab[1]->makeSound();
	std::cout << tab[1]->getType() << std::endl;
	tab[6]->makeSound();
	std::cout << tab[6]->getType() << std::endl;

	for(int i = 0; i < 10; i++)
		delete tab[i];*/
	
	return 0;
}