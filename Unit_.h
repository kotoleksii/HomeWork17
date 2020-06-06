#include "Weapon_.h"

#ifndef UNIT_H
#define UNIT_H

class Unit
{
private:
	std::string _name;
public:
	Unit(const std::string name);
	std::string getName() const;
	virtual void Attack(std::string name, Weapon* weapon) = 0;
};

class SpecialForces : public Unit
{
public:
	SpecialForces(const std::string& name);
	virtual void Attack(std::string name, Weapon* weapon) override;
};

class Terrorists : public Unit
{
public:
	Terrorists(const std::string& name);
	virtual void Attack(std::string name, Weapon* weapon) override;
};

#endif