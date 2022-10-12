#include <iostream>

#include "Zombie.hpp"

int main(void) {
  {
    std::cout << "Test case #1" << std::endl;
    Zombie defaultZombie;
    Zombie namedZombie("\x1b[0;33mzombie\x1b[0m");
    defaultZombie.announce();
    namedZombie.announce();
  }
  {
    std::cout << "Test case #2" << std::endl;
    Zombie *defaultZombie = new Zombie;
    Zombie *namedZombie = new Zombie("\x1b[0;33mzombie\x1b[0m");
    defaultZombie->announce();
    namedZombie->announce();
    delete defaultZombie;
    delete namedZombie;
  }
  {
    std::cout << "Test case #3" << std::endl;
    Zombie *zombie = newZombie("\x1b[0;33mzombie\x1b[0m");
    zombie->announce();
    delete zombie;
  }
  {
    std::cout << "Test case #4" << std::endl;
    randomChump("\x1b[0;33mzombie\x1b[0m");
  }
}
