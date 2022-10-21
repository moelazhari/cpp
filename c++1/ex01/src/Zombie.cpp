#include "Zombie.hpp"

Zombie::Zombie(void){
    return ;
}

Zombie::~Zombie(){
	std::cout << this->name << " destroyed" << std::endl;
	return ;
}

void	Zombie::announce(){
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::setName(std::string name){
	this->name = name;
	return ;
}