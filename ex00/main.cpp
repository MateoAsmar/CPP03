/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <masmar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:32:27 by masmar            #+#    #+#             */
/*   Updated: 2025/02/10 10:33:23 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap clap("Clappy");

	clap.attack("enemy");
	clap.takeDamage(5);
	clap.beRepaired(3);

	return 0;
}
