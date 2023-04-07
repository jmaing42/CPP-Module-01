#include "Zombie.hpp"

void randomChump(std::string name) {
  Zombie *zombie = newZombie(name);
  try {
    zombie->announce();
  } catch (const std::exception &e) {
    delete zombie;
    throw e;
  }
  delete zombie;
}
