#include "Zombie.hpp"

#include <cstddef>

Zombie *zombieHorde(int N, std::string name) {
  Zombie initial(name);
  Zombie *zombies = new Zombie[N];
  try {
    for (std::size_t i = 0; i < (unsigned int)N; i++) {
      zombies[i] = initial;
    }
    return zombies;
  } catch (std::exception &e) {
    delete[] zombies;
    throw e;
  }
}
