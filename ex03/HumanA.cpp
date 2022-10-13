#include "HumanA.hpp"

#include <exception>
#include <iostream>

#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {
  std::cout << "HumanA " << this->name << " is created." << std::endl;
}
HumanA::~HumanA() {
  std::cout << "HumanA " << this->name << " is destroyed." << std::endl;
}
HumanA::HumanA(const HumanA &copy) : name(copy.name), weapon(copy.weapon) {
  std::cout << "HumanA " << this->name << " has copied." << std::endl;
}
HumanA &HumanA::operator=(const HumanA &copy) {
  this->name = copy.name;
  this->weapon = copy.weapon;
  return *this;
}

void HumanA::attack() const {
  std::cout << this->name << " attacks with their " << this->weapon.getType()
            << std::endl;
}
