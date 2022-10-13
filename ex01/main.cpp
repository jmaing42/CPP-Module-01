#include <cstddef>
#include <iostream>

#include "Zombie.hpp"

int main(void) {
  {
    std::cout << "Test case #1" << std::endl;
    Zombie *zombies = zombieHorde(42, "\x1b[0;33mzombie\x1b[0m");
    for (std::size_t i = 0; i < 42; i++)
      zombies[i].announce();
    delete[] zombies;
  }
  {
    std::cout << "Test case #2" << std::endl;
    Zombie *zombies = zombieHorde(4, "\x1b[0;33mzombie\x1b[0m");
    for (std::size_t i = 0; i < 4; i++)
      zombies[i].announce();
    delete[] zombies;
  }
  {
    std::cout << "Test case #3" << std::endl;
    Zombie *zombies = zombieHorde(2, "\x1b[0;33mzombie\x1b[0m");
    for (std::size_t i = 0; i < 2; i++)
      zombies[i].announce();
    delete[] zombies;
  }
}
