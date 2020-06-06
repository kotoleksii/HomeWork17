#include "Unit_.h"

Unit::Unit(const std::string name) :
	_name{ name } {}

std::string Unit::getName() const 
{
	return this->_name;
}

SpecialForces::SpecialForces(const std::string& name) :
	Unit(name) {}

void SpecialForces::Attack(std::string name, Weapon* weapon) 
{
	std::cout << "<Special Forces>\t" << name << "\t\t"; weapon->Attack();
}

Terrorists::Terrorists(const std::string& name) :
	Unit(name) {}

void Terrorists::Attack(std::string name, Weapon* weapon)
{
	std::cout << "<Terrorist>\t\t" << name << " \t"; weapon->Attack();
}