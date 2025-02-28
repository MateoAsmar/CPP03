/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <masmar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:21:19 by masmar            #+#    #+#             */
/*   Updated: 2025/02/10 10:32:13 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap " << name << " created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	*this = other;
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	if (this != &other) {
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}

	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << name << " destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (energyPoints > 0 && hitPoints > 0) {
		std::cout << "ClapTrap " << name << " attacks " << target
			<< ", causing " << attackDamage << " points of damage!" << std::endl;
	} else {
		std::cout << "ClapTrap " << name << " has no energy or HP left!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	hitPoints -= amount;
	std::cout << "ClapTrap " << name << " takes " << amount << " damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (energyPoints > 0) {
		hitPoints += amount;
		energyPoints--;
		std::cout << "ClapTrap " << name << " repairs itself, gaining " << amount << " HP!" << std::endl;
	} else {
		std::cout << "ClapTrap " << name << " has no energy left to repair!" << std::endl;
	}
}

