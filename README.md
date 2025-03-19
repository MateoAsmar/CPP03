# CPP03
(Inheritance)
## Grade 80/100
![cpp03](https://github.com/user-attachments/assets/5371e7d5-e772-4535-b677-510accf67e8e)

## Overview

This project is all about creating a hierarchy of robot classes using C++ and demonstrates fundamental object‐oriented programming concepts such as inheritance, constructor/destructor chaining, and method overriding. It consists of three parts:

**00**. ClapTrap
   A base class representing a simple robot with:
   - **Attributes:**  
     - Name (passed in the constructor)  
     - Hit points (10)  
     - Energy points (10)  
     - Attack damage (0)
   - **Member functions:**  
     - `attack(const std::string& target)`  
     - `takeDamage(unsigned int amount)`  
     - `beRepaired(unsigned int amount)`

**01**. ScavTrap
   A derived class from ClapTrap with enhanced attributes and a unique special ability:
   - **Attributes:**  
     - Hit points (100)  
     - Energy points (50)  
     - Attack damage (20)
   - **Special member function:**  
     - `guardGate()` – indicates that the ScavTrap is now in Gate Keeper mode.
   - *Note:* Its constructors, destructor, and overridden `attack()` print messages different from ClapTrap to show proper construction and destruction chaining.

**02**. FragTrap
   Another derivative of ClapTrap which further extends functionality:
   - **Attributes:**  
     - Hit points (100)  
     - Energy points (100)  
     - Attack damage (30)
   - **Special member function:**  
     - `highFivesGuys()` – prompts a positive high-five request.
   - *Note:* Similar to ScavTrap, the construction/destruction chain is clearly visible in the output.

## Features

- **Base Class (ClapTrap):**
  - Manages basic robot attributes and energy/health management.
  - Implements simple actions: attacking, taking damage, and self-repair.
- **Derived Classes:**
  - **ScavTrap:** Inherits from ClapTrap with upgraded stats and an exclusive gate-keeping mode.
  - **FragTrap:** Inherits from ClapTrap with even higher stats and a high fives request.
- **Constructor/Destructor Chaining:**
  - Demonstrates proper order of initialization and cleanup for derived objects.
- **Method Overriding:**
  - Each derived class overrides the `attack()` method to print unique messages.

## Files Structure

- **Makefile:**  
  Automates the build process.

- **main.cpp:**  
  Contains tests that instantiate and demonstrate the behavior of ClapTrap, ScavTrap, and FragTrap objects.

- **ClapTrap.hpp / ClapTrap.cpp:**  
  Declaration and implementation of the base ClapTrap class.

- **ScavTrap.hpp / ScavTrap.cpp:**  
  Declaration and implementation of the ScavTrap class that inherits from ClapTrap.

- **FragTrap.hpp / FragTrap.cpp:**  
  Declaration and implementation of the FragTrap class that inherits from ClapTrap.

## Compilation

To build the project, simply run:

```bash
cd ex00
make
./executable_filename
```

## What I Learned

**Inheritance & Polymorphism:** How to design a class hierarchy and override base class functions for specialized behavior.

**Constructor & Destructor Chaining:** Ensuring proper order of construction/destruction in derived classes.

**Method Overriding:** Providing unique implementations in derived classes while reusing base functionality.

**Object-Oriented Design:** Building robust, reusable code following C++ best practices.

## Conclusion
This project reinforced key OOP concepts in C++ and provided practical experience with class design, inheritance, and polymorphism. It’s a fun dive into how even simple robots can have a personality—all while keeping track of energy, health, and special abilities.
