#include <iostream>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include "header-fixer.h"

int main(int argc, char** argv) {
  if (argc < 2) {
    std::cerr << "Please, provide path to file!" << std::endl;
    exit(EXIT_FAILURE);
  }
  std::filesystem::path file_path{argv[1]};
  if (!std::filesystem::exists(file_path)) {
    std::cerr << "Invalid path" << std::endl;
    exit(EXIT_FAILURE);
  }
  if (!std::filesystem::is_regular_file(file_path)) {
    exit(EXIT_FAILURE);
  }
  std::vector<std::string> file_content;
  std::ifstream file(file_path);
  std::string current_line;
  while (std::getline(file, current_line)) {
    file_content.push_back(current_line);
  }
  file.close();
  process_headers(file_content);
  return EXIT_SUCCESS;
}
