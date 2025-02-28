/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <masmar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:32:27 by masmar            #+#    #+#             */
/*   Updated: 2025/02/10 11:06:27 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
	ClapTrap clap("Clappy");
	ScavTrap scav("Scavvy");
	FragTrap frag("Fraggy");

	clap.attack("enemy");
	clap.takeDamage(5);
	clap.beRepaired(3);

	scav.guardGate();
	frag.highFivesGuys();

	return 0;
}
