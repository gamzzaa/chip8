#include "cpu.h"

namespace cpu
{
  void Fetch()
  {

  }

  Instruction* Decode(u16 raw_instruction)
  {
    Instruction *instrc = new Instruction();
    return instrc;
  }
  
  void Execute(OpCode opcode, u8 op1, u8 op2)
  {
    switch(opcode)
    {
    case SYS:
      break;
    }
  }
  /*
  void Run()
  {
    while (1)
    {
      Fetch();
      Decode();
      Execute();
    }
  }
  */
}
