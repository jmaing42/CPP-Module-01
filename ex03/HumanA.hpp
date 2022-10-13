#ifndef EX03_HUMAN_A_HPP_INCLUDED
#define EX03_HUMAN_A_HPP_INCLUDED

#include <string>

#include "Weapon.hpp"

class HumanA {
private:
  std::string name;
  Weapon &weapon;

public:
  HumanA(std::string name, Weapon &weapon);
  ~HumanA();
  HumanA(const HumanA &copy);
  HumanA &operator=(const HumanA &copy);

  void attack() const;
};

#endif
