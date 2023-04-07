#include <cstddef>
#include <iostream>

#include "Harl.hpp"

void Harl::verbose() {}
void Harl::debug() {
  std::cout
      << "I love having extra bacon for my "
         "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
      << std::endl;
}
void Harl::info() {
  std::cout
      << "I cannot believe adding extra bacon costs more money. You didn’t put "
         "enough bacon in my burger! If you did, I wouldn’t be asking for more!"
      << std::endl;
}
void Harl::warn() {
  std::cout
      << "I think I deserve to have some extra bacon for free. I’ve been "
         "coming for years whereas you started working here since last month."
      << std::endl;
}
void Harl::error() {
  std::cout << "This is unacceptable! I want to speak to the manager now."
            << std::endl;
}

struct HarlTuple {
  void (Harl::*func)();
  std::string level;
};

void Harl::complain(std::string level) {
  const HarlTuple entries[] = {
      {&Harl::debug, "DEBUG"},
      {&Harl::info, "INFO"},
      {&Harl::warn, "WARN"},
      {&Harl::error, "ERROR"},
  };

  void (Harl::*func)() = &Harl::verbose;
  for (std::size_t i = 0; i < 4; i++)
    if (level == entries[i].level)
      func = entries[i].func;
  (this->*func)();
}
