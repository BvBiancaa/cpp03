/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:03:00 by bmuni             #+#    #+#             */
/*   Updated: 2023/04/07 23:03:01 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>

class	ClapTrap
{
	protected:
		std::string name;
		int	health;
		int	energy;
		int	damage;
	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap &copy);
		explicit ClapTrap(std::string n);
		virtual ~ClapTrap();
		std::string getName(void);
		int	getAttack(void);
		ClapTrap &operator=(const ClapTrap&Cla);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif