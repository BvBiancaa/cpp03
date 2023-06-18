/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:03:11 by bmuni             #+#    #+#             */
/*   Updated: 2023/04/07 23:03:12 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{                            
	std::cout << "ScavTrap Default Constructor called" << std::endl;
	this->health = 100;
	this->energy = 50;
	this->damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &Sca): ClapTrap(Sca)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	this->health = 100;
	this->energy = 50;
	this->damage = 20;
	return ;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap name Constructor called" << std::endl;
	this->health = 100;
	this->energy = 50;
	this->damage = 20;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap desconstructor called" << std::endl;
	return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &src)
		*this = src;
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	std::cout << this->name << " ScavTrap attacks " << target << std::endl;
	return ;
}

void ScavTrap::guardGate()
{
	std::cout << this->name << " has entered in Gate keeper mode" << std::endl;
	return ;
}