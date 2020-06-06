#include "Weapon_.h"
#include "Unit_.h"

int main()
{	
	SpecialForces ct("Pablo");
	Terrorists tt("Escobar");
	Deagle d(7);
	AK47 a(30);
	Knife k(0.5);
	Katana k2(0.3);

	ct.Attack(ct.getName(),&d);
	tt.Attack(tt.getName(),&a);

	ct.Attack(ct.getName(),&k);
	tt.Attack(tt.getName(),&k2);

	std::cout << "\n" <<ct.getName()<< "\t  Damage Given\t" << tt.getName() <<"\t- "<< d.getDamage() + k.getDamage() << "\n";
	std::cout << tt.getName() << "\t  Damage Given\t" << ct.getName() <<"\t- "<< a.getDamage() + k2.getDamage() << "\n";

	if (d.getDamage() + k.getDamage() > 100){std::cout << "\nCT Win!" << "\n";}
	else if (a.getDamage() + k2.getDamage() > 100){std::cout << "\nTT Win!" << "\n";}
	else std::cout << "\nRaund Drow!" << "\n";
	
	return 0;
}