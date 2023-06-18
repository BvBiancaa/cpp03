/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:02:31 by bmuni             #+#    #+#             */
/*   Updated: 2023/04/07 23:02:33 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::string ClapTrap::getName(void)
{
	return (this->name);
}

int ClapTrap::getAttack(void)
{
	return (this->damage);
}

ClapTrap::ClapTrap(void)
{
	std::cout << "Using standard constructor, Clap Trap was created" << std::endl;
}

ClapTrap::ClapTrap(std::string n)
{
	this->damage = 10;
	this->energy = 10;
	this->health = 10;
	this->name = n;
	std::cout << "Welcome " << this->name << "!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << " was destroyed!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap&Cla)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &Cla)
		*this = Cla;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energy > 0)
	{
		this->energy -= 1;
		std::cout << this->name << " attacks " << target << std::endl;
	}
	else
		std::cout << "no more health points to do function attack ):" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "OUCH! " << this->name << " was hurt! they now have " << amount << " less health points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy > 0)
	{
		this->energy -= 1;
		std::cout << "Yey! " << this->name << " has repaired themselves! they now have " << amount << " regenerated health points" << std::endl;
	}
	else
		std::cout << "no more health points to do function berepaired ):" << std::endl;
}