#ifndef CPU_H_
#define CPU_H_

namespace cpu
{
  typedef char u8;
  typedef short int u16;
  
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
}

#endif //> CPU_H_
