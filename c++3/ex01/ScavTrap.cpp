#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void){
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "ScavTrap constructor called" << std::endl;
	return ;
}

// ScavTrap::ScavTrap(const ScavTrap &copy){
// 	std::cout << "ScavTrap copy constructor called" << std::endl;
// 	*this = copy;
// }

// ScavTrap& ScavTrap::operator= (const ScavTrap &rhs){
// 	std::cout << "ScavTrap copy assignment operator called" << std::endl;
// 	this->name = rhs.name;
// 	this->hitPoints = rhs.hitPoints;
// 	this->energyPoints = rhs.energyPoints;
// 	this->attackDamage = rhs.attackDamage;
// 	return *this;
// }

ScavTrap::~ScavTrap(void){
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

void ScavTrap::attack(std::string const & target){
	if (this->hitPoints == 0 || this->energyPoints == 0)
	{
		std::cout << "ScavTrap " << this->name << " is dead" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
}

void ScavTrap::guardGate(void){
	std::cout << "ScavTrap " << this->name << " has entered in Gate keeper mode" << std::endl;
}
