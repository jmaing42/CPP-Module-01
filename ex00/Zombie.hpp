#ifndef EX00_ZOMBIE_HPP_INCLUDED
#define EX00_ZOMBIE_HPP_INCLUDED

#define EX00_ZOMBIE_HPP_MESSAGE "BraiiiiiiinnnzzzZ..."

#include <string>

class Zombie {
private:
  std::string name;

public:
  Zombie(std::string name = "<name>");
  ~Zombie();
  Zombie(const Zombie &copy);
  Zombie &operator=(const Zombie &copy);
  void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
