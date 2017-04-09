#ifndef CPU_H_
#define CPU_H_

namespace cpu
{
  typedef unsigned char u8;
  typedef short int u16;

  static const unsigned int STACK_SIZE = 16;
  
  struct registers
  {
    u8 V0;
    u8 V1;
    u8 V2;
    u8 V3;
    u8 V4;
    u8 V5;
    u8 V6;
    u8 V7;
    u8 V8;
    u8 V9;
    u8 VA;
    u8 VB;
    u8 VC;
    u8 VD;
    u8 VE;
    u8 VF;
    u16 I;
  };

  static u16 PC = 0x0;  //> program counter - store the currently executing address
  static u8 SP = 0x0;  //> stack pointer - used to point to the topmost level of the stack

  static u16 stack[STACK_SIZE];

  void execute();
 }

#endif //> CPU_H_
