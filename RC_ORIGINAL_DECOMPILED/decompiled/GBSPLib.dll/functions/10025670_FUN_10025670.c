/*
 * FUN_10025670 at 10025670
 * undefined FUN_10025670(void)
 * Address ranges: 10025670-100259b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10025670(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float local_1c;
  float local_14;
  float local_10;
  float local_c;
  
  iVar1 = FUN_10024f00();
  uVar2 = FUN_100259c0();
  iVar3 = FUN_10014a60();
  if (iVar3 == 0) {
    FUN_10015fb0(0x40,&DAT_10265ce0,s___Actor_QKFrame_c_1003c934,0x2c6,&DAT_10265ce0,0);
    return 0;
  }
  uVar4 = uVar2 & 2;
  if (uVar4 != 0) {
    fVar7 = (float10)FUN_10024ef0();
    local_1c = (float)fVar7;
    fVar7 = (float10)FUN_10024ef0();
    iVar3 = FUN_10014a60(param_1,s__f__f_Start_T_Delta_T_1003c988,(double)local_1c,
                         (double)(fVar7 - (float10)local_1c));
    if (iVar3 == 0) {
      FUN_10015fb0(0x40,&DAT_10265ce0,s___Actor_QKFrame_c_1003c934,0x2d0,&DAT_10265ce0,0);
      return 0;
    }
  }
  if ((uVar2 & 0xfffffffd) == 0) {
    iVar3 = 0;
    if (0 < iVar1) {
      while( true ) {
        iVar5 = FUN_10024ee0();
        if (uVar4 == 0) {
          fVar7 = (float10)FUN_10024ef0();
          iVar6 = FUN_10014a60(param_1,&DAT_10037fb8,(double)fVar7);
          if (iVar6 == 0) {
            FUN_10015fb0(0x40,&DAT_10265ce0,s___Actor_QKFrame_c_1003c934,0x2e1,&DAT_10265ce0,0);
            return 0;
          }
        }
        iVar5 = FUN_10014a60(param_1,s__f__f__f__f_1003c948,(double)*(float *)(iVar5 + 4));
        if (iVar5 == 0) break;
        iVar3 = iVar3 + 1;
        if (iVar1 <= iVar3) {
          return 1;
        }
      }
      FUN_10015fb0(0x40,&DAT_10265ce0,s___Actor_QKFrame_c_1003c934,0x2e9,&DAT_10265ce0,0);
      return 0;
    }
  }
  else if ((uVar2 & 0xfffffffd) == 1) {
    FUN_10024ee0();
    FUN_1001df50();
    FUN_100144b0();
    iVar3 = FUN_10014a60(param_1,s__f__f__f_Axis_1003c978,(double)local_14,(double)local_10,
                         (double)local_c);
    if (iVar3 == 0) {
      FUN_10015fb0(0x40,&DAT_10265ce0,s___Actor_QKFrame_c_1003c934,0x2f9,&DAT_10265ce0,0);
      return 0;
    }
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        FUN_10024ee0();
        if (uVar4 == 0) {
          fVar7 = (float10)FUN_10024ef0();
          iVar5 = FUN_10014a60(param_1,&DAT_10037fb8,(double)fVar7);
          if (iVar5 == 0) {
            FUN_10015fb0(0x40,&DAT_10265ce0,s___Actor_QKFrame_c_1003c934,0x304,&DAT_10265ce0,0);
            return 0;
          }
        }
        FUN_1001df50();
        iVar5 = FUN_10014a60(param_1,&DAT_1003c974,(double)local_1c);
        if (iVar5 == 0) {
          FUN_10015fb0(0x40,&DAT_10265ce0,s___Actor_QKFrame_c_1003c934,0x30b,&DAT_10265ce0,0);
          return 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
  }
  return 1;
}

