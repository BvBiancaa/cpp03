/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:03:47 by bmuni             #+#    #+#             */
/*   Updated: 2023/04/07 23:03:48 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
	ScavTrap a ("gigi");
	ScavTrap b ("mariangelo");
	ClapTrap c ("prio");

	a.attack(b.getName());
	b.takeDamage(a.getAttack());
	b.beRepaired(10);
	b.attack(a.getName());
	a.takeDamage(b.getAttack());
	a.beRepaired(10);
	return 0;
}