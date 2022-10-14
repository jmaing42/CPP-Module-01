#include <cstddef>
#include <cstdlib>
#include <string>

#include "Harl.hpp"

struct HarlTuple {
  std::string level;
  std::size_t index;
};

int main(int argc, char **argv) {
  Harl harl;
  if (argc < 2)
    return (EXIT_FAILURE);

  const HarlTuple entries[] = {
      {"DEBUG", 0},
      {"INFO", 1},
      {"WARN", 2},
      {"ERROR", 3},
  };

  size_t index = -1;
  for (std::size_t i = 0; i < 4; i++)
    if (entries[i].level == argv[1])
      index = i;
  switch (index) {
  case 0:
    harl.complain(entries[0].level);
  case 1:
    harl.complain(entries[1].level);
  case 2:
    harl.complain(entries[2].level);
  case 3:
    harl.complain(entries[3].level);
  }
}
