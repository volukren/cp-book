#include <iostream>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include "header-fixer.h"

int main() {
  std::vector<std::string> content;
  std::string current_line;
  while (std::getline(std::cin, current_line)) {
    content.push_back(current_line);
  }
  process_headers(content);
  for (auto line : content) {
    std::cout << line << std::endl;
  }
  return EXIT_SUCCESS;
}
