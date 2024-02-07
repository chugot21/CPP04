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

Animal  ft_AnimalBrain(Animal tab, std::string str)
{
	if (str == "Cat")
		tab = new Cat();
	if (str == "Dog")
		tab = new Dog();
	return tab;
}

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Animal *tab = new Animal[20];

	for(int i = 0; i < 10; i++)
		tab[i] = new Cat();
	for(int j = 9; j < 20; j++)
		tab[j] = new Dog();

	delete[] tab;
	delete j;//should not create a leak
	delete i;

	return 0;
}