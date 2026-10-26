/*
 * FUN_10026a10 at 10026a10
 * undefined FUN_10026a10(void)
 * Address ranges: 10026a10-10026bec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10026a10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar4 = 0;
  iVar1 = FUN_10024f00();
  if (2 < iVar1) {
    iVar2 = FUN_10024cc0();
    if (iVar2 != 0) {
      iVar4 = 2;
    }
  }
  iVar2 = FUN_10014a60(param_1,s__s__d__d__d__d_1003c9a0,&DAT_1003c9b0,iVar1,param_2,iVar4,param_3);
  if (iVar2 == 0) {
    FUN_10015fb0(0x40,&DAT_10265ce0,s___Actor_vkframe_c_1003c9f4,0x1f7,&DAT_10265ce0,0);
    return 0;
  }
  if (iVar4 != 0) {
    fVar5 = (float10)FUN_10024ef0();
    fVar6 = (float10)FUN_10024ef0();
    iVar2 = FUN_10014a60(param_1,s__f__f_Start_T_Delta_T_1003c988,(double)(float)fVar5,
                         (double)(fVar6 - (float10)(float)fVar5));
    if (iVar2 == 0) {
      FUN_10015fb0(0x40,&DAT_10265ce0,s___Actor_vkframe_c_1003c9f4,0x201,&DAT_10265ce0,0);
      return 0;
    }
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_10024ee0();
      if (iVar4 == 0) {
        fVar5 = (float10)FUN_10024ef0();
        iVar3 = FUN_10014a60(param_1,&DAT_10037fb8,(double)fVar5);
        if (iVar3 == 0) {
          FUN_10015fb0(0x40,&DAT_10265ce0,s___Actor_vkframe_c_1003c9f4,0x20e,&DAT_10265ce0,0);
          return 0;
        }
      }
      iVar3 = FUN_10014a60(param_1,s__f__f__f_1003ca08);
      if (iVar3 == 0) {
        FUN_10015fb0(0x40,&DAT_10265ce0,s___Actor_vkframe_c_1003c9f4,0x218,&DAT_10265ce0,0);
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 1;
}

