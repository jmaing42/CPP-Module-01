#ifndef EX03_HUMAN_B_HPP_INCLUDED
#define EX03_HUMAN_B_HPP_INCLUDED

#include <string>

#include "Weapon.hpp"

class HumanB {
private:
  std::string name;
  Weapon *weapon;

public:
  HumanB(std::string name = "<name>");
  HumanB(std::string name, Weapon &weapon);
  ~HumanB();
  HumanB(const HumanB &copy);
  HumanB &operator=(const HumanB &copy);

  void attack() const;
  void setWeapon(Weapon &weapon);
};

#endif
