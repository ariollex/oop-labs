#include "include/split_chocolate.hpp"
#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;
  std::cout << split_chocolate(n, m) << std::endl;
  return 0;
}
