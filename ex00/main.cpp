/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:02:45 by bmuni             #+#    #+#             */
/*   Updated: 2023/04/07 23:02:46 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {
ClapTrap a ("gigi");
ClapTrap b ("mariangelo");

a.attack(b.getName());
b.takeDamage(a.getAttack());
b.beRepaired(10);
b.attack(a.getName());
a.takeDamage(b.getAttack());
a.beRepaired(10);
return 0;
}