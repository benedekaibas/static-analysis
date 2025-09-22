#include <iostream>
#include <fstream>
#include <vector>
std::string readFileIntoString(std::string& filePath) {
  std::ifstream inputFile(filePath);
  
  if(!inputFile.is_open()) {
    std::cerr << "Error opening the file!" << "\n";
  }

  std::string content;
  std::string line;

  while(std::getline(inputFile, line)) {
    content += line + "\n";
  }
  return content;
  inputFile.close();
}

std::string newFunc(){};

int main() {
  std::string sourceFile = "text.cpp";
  std::cout << readFileIntoString(sourceFile);
}
