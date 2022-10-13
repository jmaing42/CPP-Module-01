#ifndef EX03_WEAPON_HPP_INCLUDED
#define EX03_WEAPON_HPP_INCLUDED

#include <string>

class Weapon {
private:
  std::string type;

public:
  Weapon(std::string type = "<name>");
  ~Weapon();
  Weapon(const Weapon &copy);
  Weapon &operator=(const Weapon &copy);

  const std::string &getType() const;
  void setType(const std::string type);
};

#endif
