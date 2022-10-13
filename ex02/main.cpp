#include <iostream>

int main(void) {
  std::cout << "Test case #1" << std::endl;
  std::string string = "HI THIS IS BRAIN";
  std::string *stringPTR = &string;
  std::string &stringREF = string;
  std::cout << "The memory address of the string variable is "
            << (void *)&string << "." << std::endl;
  std::cout << "The memory address held by stringPTR is " << (void *)stringPTR
            << "." << std::endl;
  std::cout << "The memory address held by stringREF is " << (void *)&stringREF
            << "." << std::endl;
  std::cout << "The value of the string variable is " << string << "."
            << std::endl;
  std::cout << "The value pointed to by stringPTR is " << *stringPTR << "."
            << std::endl;
  std::cout << "The value pointed to by stringREF is " << stringREF << "."
            << std::endl;
}
