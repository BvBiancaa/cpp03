/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:03:43 by bmuni             #+#    #+#             */
/*   Updated: 2023/04/07 23:03:43 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	FragTrap(void);
	FragTrap(const FragTrap &fra);
	FragTrap(std::string name);
	virtual ~FragTrap();
	FragTrap &operator=(const FragTrap&fra);
	void highFivesGuys(void);
};