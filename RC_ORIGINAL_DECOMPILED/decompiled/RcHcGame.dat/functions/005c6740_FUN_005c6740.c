/*
 * FUN_005c6740 at 005c6740
 * undefined FUN_005c6740(void)
 * Address ranges: 005c6740-005c68f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __fastcall FUN_005c6740(undefined4 param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int local_8 [2];
  
  if ((param_2 & 0xffff0000) != 0x10010000) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9878 + 8,0x63c,
                 &DAT_006b3f70,0);
    return (int *)0x0;
  }
  piVar2 = (int *)FUN_005cf3b0(0x44);
  piVar1 = piVar2 + 8;
  *piVar2 = 0;
  *piVar1 = 0;
  if (piVar2 == (int *)0x0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9878 + 8,0x645,
                 &DAT_006b3f70,0);
    return (int *)0x0;
  }
  piVar2[9] = param_2 >> 9 & 0x7f;
  piVar2[1] = param_2 >> 2 & 0x7f;
  piVar2[0xe] = 0;
  piVar2[0xf] = -0x40800000;
  piVar2[6] = 0;
  piVar2[7] = -0x40800000;
  piVar2[0x10] = 0;
  if ((param_2 & 2) != 0) {
    iVar3 = FUN_005de0d0(local_8);
    *piVar1 = iVar3;
    if (iVar3 == 0) {
      FUN_005cf220(0xffffffff,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9878 + 8,0x65b,
                   &DAT_006b3f70,0);
      FUN_005cf400(piVar2);
      _DAT_007203c0 = 0;
      return (int *)0x0;
    }
    iVar3 = FUN_005c6700();
    piVar2[9] = iVar3;
    if (local_8[0] != 0) {
      piVar2[0x10] = piVar2[0x10] | 2;
    }
  }
  if ((param_2 & 1) != 0) {
    iVar3 = FUN_005dd3e0(local_8);
    *piVar2 = iVar3;
    if (iVar3 == 0) {
      FUN_005cf220(0xffffffff,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9878 + 8,0x669,
                   &DAT_006b3f70,0);
      if (*piVar1 != 0) {
        FUN_005c8f80();
      }
      FUN_005cf400(piVar2);
      _DAT_007203c0 = 0;
      return (int *)0x0;
    }
    iVar3 = FUN_005c6720();
    piVar2[1] = iVar3;
    if (local_8[0] != 0) {
      piVar2[0x10] = piVar2[0x10] | 2;
    }
  }
  piVar2[0x10] = piVar2[0x10] | 1;
  return piVar2;
}

