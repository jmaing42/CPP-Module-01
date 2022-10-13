#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : name(name) {
  std::cout << "Zombie " << this->name << " is spawned." << std::endl;
}
Zombie::~Zombie() {
  std::cout << "Zombie " << this->name << " is despawned." << std::endl;
}
Zombie::Zombie(const Zombie &copy) : name(copy.name) {
  std::cout << "Zombie " << this->name << " has multiplied." << std::endl;
}
Zombie &Zombie::operator=(const Zombie &copy) {
  this->name = copy.name;
  return *this;
}

void Zombie::announce(void) {
  std::cout << this->name << ": " EX00_ZOMBIE_HPP_MESSAGE << std::endl;
}
