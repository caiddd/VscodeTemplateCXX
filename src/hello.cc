#include "hello.hpp"

void fun(const std::string& name) {
  std::cout << name << " ";
}

int main() {
  fun("world");
  return 0;
}