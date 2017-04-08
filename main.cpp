#include <iostream>
#include "cpu.h"
#include "memory.h"

int main()
{
  short int i = 0;
  std::cout << "chip8 start" << std::endl;

  memory::ram[0] = 0;
  
  std::cout << sizeof(i) << std::endl;
  return 0;
}
