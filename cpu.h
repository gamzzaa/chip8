#ifndef CPU_H_
#define CPU_H_

namespace cpu
{
  typedef unsigned char u8;
  typedef short int u16;

  struct Registers
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

  static const unsigned int kStackSize = 16;
  static u16 stack[kStackSize];

  enum OpCode
  {
    SYS,
    CLS,
    RET,
    JP,
    CALL,
    SExkk,
    SNExkk,
    SExy,
    LDxkk,
    ADDxkk,
    LDxy,
    OR,
    AND,
    XOR,
    ADDxy,
    SUB,
    SHR,
    SUBN,
    SHL,
    SNExy,
    LDnnn,
    JPnnn,
    RND,
    DRW,
    SKP,
    SKNP,
    LDx,
    LDx15,
    LDx18,
    ADDx,
    LDx29,
    LDx33,
    LDx55,
    LDx65
  };

  struct Instruction
  {
    OpCode opcode;
    u8 operand1;
    u8 operand2;
  };

  void Fetch();
  Instruction* Decode(u16 rawInstruction);
  void Execute(OpCode opcode, u8 op1, u8 op2);
 }

#endif //> CPU_H_
