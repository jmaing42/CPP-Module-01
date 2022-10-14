#ifndef EX05_HARL_HPP_INCLUDED
#define EX05_HARL_HPP_INCLUDED

#include <string>

class Harl {
private:
  void verbose();
  void debug();
  void info();
  void warn();
  void error();

public:
  void complain(std::string level);
};

#endif
