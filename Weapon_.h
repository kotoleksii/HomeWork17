#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon
{
private:
	std::string _weaponName;
	double _weaponDamage;
public:
	Weapon(std::string name, double damage);
	std::string getWeaponName() const;
	double getDamage() const;
	virtual void Attack() = 0;
	virtual ~Weapon() {}
};

class FireArm : public Weapon
{
private:
	int _ammo;
public:
	FireArm(std::string name, double damage, int ammo);
	int getAmmo() const;
	virtual void Attack() override;
	virtual ~FireArm() override;
};

class ColdSteel : public Weapon
{
private:
	double _bladeLength;
	double _bladeThickness;
public:
	ColdSteel(std::string name, double damage, double bladeLength, double bladeThickness);
	double getBladeLenght() const;
	double getBladeThickness() const;
	virtual void Attack() override;
};

class Deagle final : public FireArm
{
public:
	Deagle(int ammo);
	virtual void Attack() override;
};

class AK47 final : public FireArm
{
public:
	AK47(int ammo);
	virtual void Attack() override;
};

class Knife final : public ColdSteel
{
public:
	Knife(double bladeThickness);
	virtual void Attack() override;
};

class Katana final : public ColdSteel
{
public:
	Katana(double bladeThickness);
	virtual void Attack() override;
};

#endif // !WEAPON_H