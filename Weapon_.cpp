#include "Weapon_.h"

Weapon::Weapon(std::string name, double damage) :
	_weaponName{ name }, _weaponDamage{ damage } {}

std::string Weapon::getWeaponName() const
{ 
	return this->_weaponName;
}

double Weapon::getDamage() const
{ 
	return this->_weaponDamage;
}

FireArm::FireArm(std::string name, double damage, int ammo) :
	Weapon(name, damage), _ammo{ ammo } {}

int FireArm::getAmmo() const
{ 
	return this->_ammo;
}

void FireArm::Attack()
{
	std::cout << "!FireArm" << std::endl;
}

 FireArm::~FireArm()
{
	//std::cout << "Temp... " << "\n";
	//delete[] ?no data;
}

 ColdSteel::ColdSteel(std::string name, double damage, double bladeLength, double bladeThickness) :
	 Weapon(name, damage), _bladeLength{ bladeLength }, _bladeThickness{ bladeThickness } {}

 double ColdSteel::getBladeLenght() const
 {
	 return this->_bladeLength;
 }

 double ColdSteel::getBladeThickness() const
 {
	 return this->_bladeThickness;
 }

  void ColdSteel::Attack() 
 {
	 std::cout << "!ColdSteel" << std::endl;
 }

  Deagle::Deagle(int ammo) :
	  FireArm("Deagle", 55, 7) {}

  void Deagle::Attack()
  {
	  std::cout << "<PIU>\t\t with " << getWeaponName() << "\t(" << getDamage() << " damage)" << std::endl;
  }

  AK47::AK47(int ammo) :
	  FireArm ("AK47", 33, 30) {}

  void AK47::Attack() 
  {
	  std::cout << "<TRA!TA!TA!>\t with " << getWeaponName() << "\t(" << getDamage() << " damage)" << std::endl;
  }

  Knife::Knife(double bladeThickness) : 
	  ColdSteel("Knife", 25, 15, 0.5) {}

  void Knife::Attack()
  {
	  std::cout << "<VJUH>\t\t with " << getWeaponName() << "\t(" << getDamage() << " damage)" << std::endl;
  }

  Katana::Katana(double bladeThickness) :
	  ColdSteel("Katana", 65, 88, 0.3) {}

  void Katana::Attack()
  {
	  std::cout << "<JAPAN VJUH>\t with " << getWeaponName() << "\t(" << getDamage() << " damage)" << std::endl;
  }