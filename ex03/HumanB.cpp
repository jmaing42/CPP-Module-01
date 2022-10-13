#include "HumanB.hpp"

#include <iostream>

#include "Weapon.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(nullptr) {
  std::cout << "HumanB " << this->name << " is created." << std::endl;
}
HumanB::HumanB(std::string name, Weapon &weapon) : name(name), weapon(&weapon) {
  std::cout << "HumanB " << this->name << " is created." << std::endl;
}
HumanB::~HumanB() {
  std::cout << "HumanB " << this->name << " is destroyed." << std::endl;
}
HumanB::HumanB(const HumanB &copy) : name(copy.name), weapon(copy.weapon) {
  std::cout << "HumanB " << this->name << " has copied." << std::endl;
}
HumanB &HumanB::operator=(const HumanB &copy) {
  this->name = copy.name;
  this->weapon = copy.weapon;
  return *this;
}

void HumanB::attack() const {
  std::cout << this->name << " attacks with their " << this->weapon->getType()
            << std::endl;
}
void HumanB::setWeapon(Weapon &weapon) { this->weapon = &weapon; }
