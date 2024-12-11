#include <iostream>
#include <fstream>
#include <string>

void replaceString(std::string &file, std::string &s1, std::string &s2)
{

  std::ifstream iFile(file.c_str());
  if (iFile.fail()){
    std::cout << "Failed to open input file" << std::endl;
    return;
  }

  std::string n_file = file;
  std::ofstream oFile(n_file.c_str());
  n_file.append(".replace");

  if (oFile.fail()){
    std::cout << "Failed to create new file" << std::endl;
    iFile.close();
    return;
  }

  std::string line;
  size_t i;

  while (std::getline(iFile, line)){
    size_t pos = 0;
    i = 0;

    while ((i = line.find(s1, pos)) != std::string::npos){
      oFile << line.substr(pos, i - pos) << s2;
      pos = i + s1.length();
    }

    oFile << line.substr(pos) << std::endl;
  }

  oFile.close();
  iFile.close();
}

int main(int ac, char **av)
{
  if (ac != 4){
    std::cout << "Must have 3 arguments. <File>, <Original String>, <Replacement String>. " << std::endl;
    return 1;
  }

  std::string file = av[1];
  std::string s1 = av[2];
  std::string s2 = av[3];

  replaceString(file, s1, s2);

  return 0;
}
