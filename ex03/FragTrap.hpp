/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:04:50 by bmuni             #+#    #+#             */
/*   Updated: 2023/04/07 23:04:51 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
	FragTrap(void);
	FragTrap(const FragTrap &fra);
	FragTrap(std::string name);
	~FragTrap();
	FragTrap &operator=(const FragTrap&fra);
	void highFivesGuys(void);
};

#endif