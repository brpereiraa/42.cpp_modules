#include "./Harl.hpp"

void Harl::debug(void){ std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl; }
void Harl::info(void){ std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more !" << std::endl;}
void Harl::warning(void){ std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl; }
void Harl::error(void){ std::cout << "TRhis is unacceptable! I want to speak to the manager now." << std::endl;}

void Harl::complain(std::string level)
{
  void (Harl::*Fcts[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

  int lvl = atoi(level.c_str()) - 1; 

  if (lvl < 0 || lvl > 3 ){
    std::cout << "Invalid message. Please select a number from 1 to 4" << std::endl;
    return ;
  }

  (this->*Fcts[lvl])();
}
