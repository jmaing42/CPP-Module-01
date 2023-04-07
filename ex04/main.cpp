#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

static int replace(const std::string &filename, const std::string &s1,
                   const std::string &s2) {
  std::ifstream f1(filename);
  if (!f1.is_open())
    return EXIT_FAILURE;
  std::stringstream buffer;
  buffer << f1.rdbuf();
  f1.close();
  std::string original = buffer.str();
  std::string result = "";
  std::size_t current_position = 0;
  while (current_position < original.length()) {
    if (current_position + s1.length() <= original.length() &&
        original.substr(current_position, s1.length()) == s1) {
      result += s2;
      current_position += s1.length();
    } else {
      result += original[current_position];
      current_position++;
    }
  }
  std::ofstream f2(filename + ".replace");
  if (!f2.is_open())
    return EXIT_FAILURE;
  f2 << result;
  f2.close();
  return EXIT_SUCCESS;
}

int main(int argc, char **argv) {
  if (argc != 4)
    return EXIT_FAILURE;
  return replace(argv[1], argv[2], argv[3]);
}
