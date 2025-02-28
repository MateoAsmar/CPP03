/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <masmar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:32:27 by masmar            #+#    #+#             */
/*   Updated: 2025/02/10 10:43:38 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	ClapTrap clap("Clappy");
	ScavTrap scav("Scavvy");

	clap.attack("enemy");
	clap.takeDamage(5);
	clap.beRepaired(3);

	scav.attack("attack enemy");
	scav.guardGate();

	return 0;
}
