#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type) : type(type) {
  std::cout << "Weapon " << this->type << " is created." << std::endl;
}
Weapon::~Weapon() {
  std::cout << "Weapon " << this->type << " is destroyed." << std::endl;
}
Weapon::Weapon(const Weapon &copy) : type(copy.type) {
  std::cout << "Weapon " << this->type << " has copied." << std::endl;
}
Weapon &Weapon::operator=(const Weapon &copy) {
  this->type = copy.type;
  return *this;
}

const std::string &Weapon::getType() const { return this->type; }
void Weapon::setType(const std::string type) { this->type = type; }
