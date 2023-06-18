/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:03:38 by bmuni             #+#    #+#             */
/*   Updated: 2023/04/07 23:03:39 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	std::cout << "FragTrap Default Constructor called" << std::endl;
	this->health = 100;
	this->energy = 100;
	this->damage = 30;
}

FragTrap::FragTrap(const FragTrap &fra): ClapTrap(fra)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
	this->health = 100;
	this->energy = 100;
	this->damage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap name Constructor called" << std::endl;
	this->name = name;
	this->health = 100;
	this->energy = 100;
	this->damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap deconstructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap&fra)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &fra)
		*this = fra;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Positive high five request" << std::endl;
}