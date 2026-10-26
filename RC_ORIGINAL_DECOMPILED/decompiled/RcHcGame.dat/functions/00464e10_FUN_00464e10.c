/*
 * FUN_00464e10 at 00464e10
 * undefined FUN_00464e10(void)
 * Address ranges: 00464e10-00464f77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00464e10(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006276a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00501cb0(param_2);
  param_1[0x3e] = 0;
  param_1[0x1a8] = 0;
  param_1[0x1aa] = 0;
  param_1[0x1a7] = param_3;
  param_1[0x1a9] = 0x437f0000;
  param_1[0x1ae] = 0xffffffff;
  param_1[0x1af] = 0xffffffff;
  param_1[0x1b0] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1b1) = 1;
  *param_1 = &PTR_FUN_0064d8b8;
  puVar3 = param_1 + 0x5d;
  param_3 = 10;
  do {
    puVar1 = puVar3 + -0x1c;
    param_2 = 4;
    do {
      FUN_005b3070();
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0x437f0000;
      puVar1[4] = 0x437f0000;
      puVar1[5] = 0x437f0000;
      puVar1[6] = 0x43160000;
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
      param_1[0x1b3] = 0x41200000;
      param_1[0x1b2] = 0x42480000;
    } while (param_2 != 0);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[-0x1b] = 0;
    puVar3[-0x1a] = 0x3f800000;
    puVar3[-0x12] = 0x3f800000;
    puVar3[-0x11] = 0x3f800000;
    puVar3[-9] = 0x3f800000;
    puVar3[-8] = 0;
    puVar1 = puVar3 + -0x18;
    iVar2 = 2;
    do {
      puVar1[-1] = 0x43750000;
      *puVar1 = 0x43750000;
      puVar1[1] = 0x437f0000;
      puVar1[2] = 0x42480000;
      puVar1 = puVar1 + 9;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = puVar3 + -6;
    iVar2 = 2;
    do {
      puVar1[-1] = 0x41200000;
      *puVar1 = 0x40a00000;
      puVar1[1] = 0x437f0000;
      puVar1[2] = 0x43160000;
      puVar1 = puVar1 + 9;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar3 = puVar3 + 0x24;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  ExceptionList = local_c;
  return param_1;
}

